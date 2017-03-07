#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
	int x = 5;
	printf("parent - %d  %d \n" ,getpid(),getppid());

	x = fork();
		
	printf("%d  %d x = %d \n" ,getpid(),getppid(),x);
	sleep(8);
}
