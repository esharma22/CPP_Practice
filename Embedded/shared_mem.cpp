#include <iostream>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

using namespace std;

int main()
{
	int fd;
	char *map_pointer;
	char *c;

	fd = shm_open("/ES_memory", O_CREAT|O_RDWR|O_EXCL, S_IRUSR|S_IWUSR);

	if(fd == -1)
	{
		perror("Creating shared memory");
	}

	ftruncate(fd, 100);

	map_pointer = (char*)mmap(NULL,							//New mapping
										100,
										PROT_READ|PROT_WRITE,	//Permissions for user
										MAP_SHARED,					//Mode for other users, shared or private
										fd,							//Shared memory file descriptor
										0);							//Memory offset for initialization

	if(map_pointer == MAP_FAILED)
	{
		perror("Mmap issue");
	}

	c = map_pointer;

	for(int i = 0; i < 100; i++)
	{
		c[i] = '*';
	}

	c = map_pointer;

	for(int j = 0; j < 100; j++)
	{
		cout << c[j] << endl;
	}

	shm_unlink("/ES_memory");
	return 0;
}
