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

	res = x / y;

	printf("result = %d \n" , res);
}

