

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	int *ptr = malloc(4);
	*ptr = 5;
	printf("PARENT %d \n",getpid());

	int x = fork();
	if(x == 0)
	{
		printf("CHILD PROCESS  %d \n" , getpid());
		*ptr = *ptr + 5;
		
	}

	printf("PID = %d *ptr = %d \n" ,getpid(), *ptr);
}













