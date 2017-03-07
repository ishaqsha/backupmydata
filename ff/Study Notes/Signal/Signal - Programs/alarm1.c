#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void alarmhandler(int a)
{
	printf("ALARM : WAKE UP \n");
}
int main()
{
	int i;
	signal(SIGALRM , alarmhandler);
	alarm(5);
	pause();
	printf("END OF PROGRAM \n");
}
