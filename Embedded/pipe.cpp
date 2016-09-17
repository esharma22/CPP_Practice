#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>

using namespace std;

int main()
{
	int fd[2], nbytes;
	char mystring[] = "Hello, I am Ektaa";
	char readbuffer[100];
	pid_t pid;
	pipe(fd);

	pid = fork();

	if(pid < 0)
	{
		cerr << "Fork failed" << endl;
		exit(1);
	}
	else
	{
		if(pid == 0)
		{
			close(fd[0]);	//read closed for child

			write(fd[1], mystring, strlen(mystring)+1);	//writing by child
		}
		else if(pid > 0)
		{
			close(fd[1]);	//write closed for parent

			nbytes = read(fd[0], readbuffer, sizeof(readbuffer));	//reading by parent

			cout << "nbytes- " << nbytes << endl;

			if(nbytes == -1)
			{
				cerr << "Problem in parent for reading" << endl;
				exit(1);
			}
			else
			{
				cout << "Full string read" << endl;
				cout << "Message from child- " << readbuffer << endl;
			}
		}
	}
	return 0;
}
