#include <signal.h>
#include <unistd.h>

void myfunc(int a)
{
	printf("MY HANDLER INVOKED ");
	printf(" %d \n" , a);
	exit(0);
}
int main()
{
	int a , b , res;

	printf("Enter two number : ");
	scanf(" %d %d",&a,&b);
	#ifdef SIGNAL
	signal(SIGFPE , myfunc);
	#endif
	res = a / b;
	printf("res = %d " , res);
	res = a / (b-1);
	printf("res = %d " , res);
	res = a / (b-2);
	printf("res = %d " , res);
}
