

#include <sys/types.h>
#include <unistd.h>

int global = 1;
int main()
{
	int local = 1;
	printf("PARENT %d \n",getpid());

	int x = fork();
	if(x == 0)
	{
		printf("CHILD PROCESS  %d \n" , getpid());
		global = global + 5;
		local = local + 5;
		
	}

	printf("PID = %d global = %d local = %d \n" ,getpid(), global,local);
}













