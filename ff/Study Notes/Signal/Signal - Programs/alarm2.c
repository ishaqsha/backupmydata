#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void alarmhandler(int a)
{
	printf("TIME OVER \n");
	exit(0);
}
int main()
{
	int i;
	signal(SIGALRM , alarmhandler);
	alarm(5);
	for(i = 0 ; i < 10 ; i++)
	{
		printf(" %d\n" , i);
		sleep(1);
	}
	printf("END OF PROGRAM \n");
}
