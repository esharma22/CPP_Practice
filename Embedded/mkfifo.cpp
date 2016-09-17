#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

using namespace std;

int main()
{
	int named_pipe, fd;
	char msg[] = "Hello. Using named pipe\n";

/*
	named_pipe = mkfifo("myfifo", S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH);
	if(named_pipe < 0)
	{
		perror("mkfifo creation");
	}
*/
	fd = open("myfifo", O_RDWR);

	write(fd, msg, strlen(msg)+1);

	return 0;
}
