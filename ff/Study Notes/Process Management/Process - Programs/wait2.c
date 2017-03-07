#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	int x = 5;
	x = fork();
	if(x == 0)
	{
		printf("CHILD PROCESS \n");
		sleep(2);		
		return 4;
	}
	else
	{
		printf("PARENT PROCESS \n");
		int exitstatus;
		wait(&exitstatus);
		exitstatus = exitstatus >> 8;
		printf("child exit status = %x \n" , exitstatus);
	}
}

