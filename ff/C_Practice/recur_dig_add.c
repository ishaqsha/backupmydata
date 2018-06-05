#include<stdio.h>
int f(int num)
{
	int rem;
	if(num!=0)
	{
		rem=num%10;
		num=num/10;
		return(rem+f(num));
	}
	else
	{
		return 0;

	}
}



int main()
{
	int num, result;
	printf("enter the num\n");
	scanf("%d",&num);
	result=f(num);
	printf("sum of digit is result %d\n",result);

}
