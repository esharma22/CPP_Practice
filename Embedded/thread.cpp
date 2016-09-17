#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

pthread_mutex_t mymutex;

void* printHello(void *t_id)
{
	pthread_mutex_lock(&mymutex);
	long tid;
	tid = (long)t_id;
	cout << "Hello! It's thread- " << tid << endl;
	pthread_mutex_unlock(&mymutex);

	return NULL;
//	pthread_exit(NULL);
}

int main()
{
	pthread_t threads[2];
	int ret_value;

	if(pthread_mutex_init(&mymutex, NULL) != 0)
	{
		cout << "Mutex not initialized" << endl;
		return 1;
	}
	
	for(long t; t < 2; t++)
	{
		cout << "In main, creating thread- " << t << endl;
		ret_value = pthread_create(&threads[t], NULL, printHello, (void*)t);
		sleep(1);
		if(ret_value)
		{
			cout << "Error, return value- " << ret_value << endl;
			exit(-1);
		}
	}
	
	pthread_join(threads[0], NULL);
	pthread_join(threads[1], NULL);
	pthread_mutex_destroy(&mymutex);
	pthread_exit(NULL);
}
