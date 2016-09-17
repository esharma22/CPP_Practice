#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

int shared_resource = 0;
pthread_mutex_t mymutex;

void* foo(void* parameter);

int main()
{
	pthread_t tid;

	pthread_mutex_lock(&mymutex);
	pthread_create(&tid, NULL, foo, NULL);
	sleep(1);
	pthread_mutex_unlock(&mymutex);

	pthread_mutex_lock(&mymutex);
	cout << "Shared resource- " << shared_resource << endl;
	pthread_mutex_unlock(&mymutex);

	pthread_mutex_destroy(&mymutex);
	return 0;
}

void* foo(void* parameter)
{
	pthread_mutex_lock(&mymutex);
	cout << "Changing value of shared resource" << endl;
	shared_resource = 22;
	pthread_mutex_unlock(&mymutex);

	return 0;
}
