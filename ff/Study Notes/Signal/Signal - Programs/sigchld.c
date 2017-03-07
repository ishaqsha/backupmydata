#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void myfunc(int a);

int main()
{
	signal(SIGCHLD , myfunc);

	int ret = fork();

	if(ret == 0)
	{
		printf("CHILD id = %d \n" , getpid());
	#ifdef SLEEP
		sleep(2);
	#endif
		printf("AFTER SLEEP \n");
	}
	else
	{
		printf("PARENT id = %d \n" , getpid());
	}
}

void myfunc(int a)
{
	printf("ENTERED MYHANDLER \n");
	printf("signal recieved : %d \n",a);
	printf(" id = %d \n",getpid());
}
