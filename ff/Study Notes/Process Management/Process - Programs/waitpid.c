#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc,char *argv[])
{
	int c1 = fork();
	if(c1 == 0)
	{
		return 5;
	}
	else 
	{
		int c2 = fork();
		if(c2 == 0)
		{
			sleep(2);
			return 8;
		}
		else
		{
		int exitstatus;
		if(atoi(argv[1]) == 1)
			waitpid(c1 , &exitstatus,WUNTRACED);
		else
			waitpid(c2 , &exitstatus,WUNTRACED);
			
		printf("child exit status = %x \n" , exitstatus >> 8);
		}
	}
}


