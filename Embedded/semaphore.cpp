#include <iostream>
#include <sys/stat.h>	//For modes: S_IRUSR, etc
#include <fcntl.h>		//For flags: O_CREAT, O_RDWR, etc
#include <semaphore.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	sem_t *mysemaphore;
	int mysem;

	mysemaphore = sem_open("/ES_semaphore", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR, 1);

	if(mysemaphore == SEM_FAILED)
	{
		perror("Opening semaphore");
		exit(1);
	}

	sem_getvalue(mysemaphore, &mysem);
	cout << "Semaphore value before grabbing- " << mysem << endl;

	sem_wait(mysemaphore);

	sem_getvalue(mysemaphore, &mysem);
	cout << "Semaphore value after grabbing- " << mysem << endl;

	cout << "Hit enter to continue" << endl;
	cin.get();

	sem_post(mysemaphore);

	sem_getvalue(mysemaphore, &mysem);
	cout << "Semaphore value after releasing- " << mysem << endl;

	sem_close(mysemaphore);
	sem_unlink("/ES_semaphore");

	return 0;
}
