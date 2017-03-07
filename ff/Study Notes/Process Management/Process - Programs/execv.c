#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	int x = 5;
	printf("START \n");
	getchar();
	x = fork();
	if(x == 0 )
{
char *names[] = {"VENKY","ARIF","VISHU",NULL};
execv("./first",names);
return 0;
}
	wait(0);
	printf("PARENT END \n");
}






