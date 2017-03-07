#include <stdio.h>
#include <signal.h>
#include <unistd.h>
void myfunc(int a);

int main()
{
	int x = 0 , y = 0,res;
	printf("Enter the numerator :");
	scanf(" %d",&x);
	printf("Enter the denominator : ");
	scanf("%d",&y);

	signal(SIGFPE , myfunc);

	res = x / y;

	printf("result = %d \n" , res);

}

void myfunc(int a)
{
	printf("ENTERED MYHANDLER \n");
	printf("signal recieved : %d \n",a);
	printf("Divide by zero error ");
	exit(1);
}
