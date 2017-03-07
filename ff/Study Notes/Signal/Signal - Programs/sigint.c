#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void myfunc(int a);

int main()
{
	signal(SIGINT , myfunc);

	printf("Press ^C is 5 seconds \n");

	sleep(5);


	printf("you never pressed ^c" );
}

void myfunc(int a)
{
	printf("ENTERED MYHANDLER \n");
	printf("signal recieved : %d \n",a);
	exit(1);
}
