#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <fstream>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include "goldchase.h"
#include "Map.h"

using namespace std;

int main()
{
	int sh_fd;
	ifstream map_board;
	sem_t *mysemaphore;
	string line;
	char *map_pointer;
	int mysem;
	int row = 0, col = 0, gold = 0;

	mysemaphore = sem_open("/ES_semaphore", O_CREAT|O_RDWR|O_EXCL, S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP, 1);
	if(mysemaphore == SEM_FAILED)
	{
		if(errno != EEXIST)
		{
			perror("Creating semaphore");
			exit(1);
		}
	}

	if(mysemaphore != SEM_FAILED)
	{
		sem_wait(mysemaphore);
		sh_fd = shm_open("/ES_memory", O_CREAT|O_EXCL|O_RDWR, S_IRUSR|S_IWUSR|S_IROTH|S_IWOTH|S_IRGRP|S_IWGRP);
		map_board.open("mymap.txt");
		getline(map_board, line);
		gold = stoi(line);
		while(getline(map_board, line))
		{
			col = line.length();
			row++;
		}
		ftruncate(sh_fd, row*col);
		map_pointer = (char*)mmap(NULL,
											row*col,
											PROT_READ|PROT_WRITE,
											MAP_SHARED,
											sh_fd,
											0);

		char *ch = map_pointer;
		while(*ch != '\0')
		{
			if(*ch == ' ')	*map_pointer = 0;
			else if(*ch == '*')	*map_pointer = G_WALL;
			else if(*ch == '1')	*map_pointer = G_PLR0;
			else if(*ch == 'G')	*map_pointer = G_GOLD;
			else if(*ch == 'F')	*map_pointer = G_FOOL;
			ch++;
			map_pointer++;
		}
	}
	
	sem_close(mysemaphore);
	sem_unlink("/ES_semaphore");
	shm_unlink("/ES_memory");
}
