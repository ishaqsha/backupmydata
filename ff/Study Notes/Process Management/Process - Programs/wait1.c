#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	int x = 5;
	printf("START OF PROGRAM \n");
	printf("parent - %d  %d \n" ,getpid(),getppid());
	x = fork();
	if(x == 0)
	{
		printf("CHILD PROCESS \n");
		sleep(2);		
		printf("END OF CHILD \n");
	}
	else
	{
		printf("PARENT PROCESS \n");
	#ifdef WAIT
		wait(0);
	#endif
		printf("END OF PARENT \n");
	}
}











