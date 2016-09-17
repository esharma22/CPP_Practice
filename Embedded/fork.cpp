#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

using namespace std;

int main()
{
	pid_t pid;
	int status;
	int local_var = 0;

	pid = fork();

	if(pid == 0)		//Child process
	{
		local_var++;
		cout << "Child process- " << local_var << endl;
		for(int i = 0; i < 10; i++)
		{
			cout << "Child: " << i <<endl;
		}
	}
	else if(pid > 0)	//Parent process
	{
		local_var = 10;
		cout << "Parent process- " << local_var << endl;
		for(int j = 0; j < 5; j++)
		{
			cout << "Parent: " << j << endl;
		}
		wait(&status);
		cout << "Child is done" << endl;
	}
	else if(pid < 0)
	{
		cout << "Fork failed" << endl;
		exit(1);
	}
	return 0;
}
