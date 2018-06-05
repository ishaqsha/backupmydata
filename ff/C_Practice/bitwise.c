#include<stdio.h>
int main()
{

	int num=10,i;
	for(i=31;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
	}
	return 0;

}
