#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int data = 10;

int main()
{
	int x = 0;

	#ifdef VFORK
		x = vfork();
	#else
		x = fork();
	#endif

	if(x == 0)
	{
		data = 20;
		printf("Child data = %d \n",data);
		exit(0);
	}
	else
	{
		printf("Parent data = %d \n",data);
		data = 40;
		printf("Parent data = %d \n",data);
	}
}
