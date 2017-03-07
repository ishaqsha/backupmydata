#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	int x = 5;
	printf("START OF PROGRAM \n");	
	x = fork();
	if(x == 0)
	{
		printf("CHILD PROCESS \n");
		x = execlp("ls","ls","-l",NULL);
		printf("return value of execl = %d \n",x);
	}
	else
	{
		printf("PARENT PROCESS \n");
	}
}

