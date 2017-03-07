#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void myhandler(int a);

int main()
{
	int x = 0;
	printf("1. Default 2. Ignore 3. Handler \n");
	scanf(" %d",&x);

	switch(x)
	{
	case 1 : signal(SIGINT , SIG_DFL); break;
	case 2 : signal(SIGINT , SIG_IGN); break;
	case 3 : signal(SIGINT , myhandler); break;
	}

	sleep(5);
	printf("END OF PROGRAM ");
}

void myhandler(int a)
{
	printf("ENTERED MYHANDLER \n");
	printf("signal recieved : %d \n",a);
	exit(1);
}
