#include <iostream>
#include <errno.h>		//For errno
#include <stdio.h>		//For perror
#include <sys/types.h>	//For open, read, write
#include <sys/stat.h>	//For open, read, write
#include <fcntl.h>		//For open, read, write
#include <unistd.h>		//For read, write

using namespace std;

int main()
{
	int fd;
	char *arr = new char[100];

	fd = open("random.txt", O_RDWR);

	if(fd == -1)
	{
		perror("Opening random.txt");
	}
	read(fd, arr, 100);

	cout << "Text from file- " << arr << endl;

	if(write(fd, "This is file IO", 16) == -1)
	{
		perror("Writing to random.txt");
	}

	cout << "All done" << endl;

	return 0;
}
