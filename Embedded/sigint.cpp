#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

void sig_handler(int sig);

int main()
{
	if(signal(SIGINT, sig_handler) == SIG_ERR)
	{
		cout << "Can't capture SIGINT" << endl;
	}
	while(1)
		sleep(1);

	return 0;
}

void sig_handler(int sig)
{
	if(sig == SIGINT)
	{
		cout << "SIGINT received" << endl;
	}
}
