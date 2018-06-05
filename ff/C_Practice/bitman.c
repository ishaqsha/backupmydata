#include<stdio.h>
int main()
{

	int num;
	printf("enter the num\n");
	scanf("%d",&num);
	int i,res1,res2;
	res1=(num>>3)&1;
	res2=(num>>7)&1;
	for(i=31;i>=0;i--)
	{

		printf("%d",(num>>i)&1);
	}
	printf("\n");
	if(res1==res2)
	{
		printf("both bit are same \n");
		num^=(1<<7);
		for(i=31;i>=0;i--)
		{

			printf("%d",(num>>i)&1);
		}

	}
	else
	{
		printf("BOTH ARE DIFFERNET\n");
		num |=(1<<7);
		for(i=31;i>=0;i--)
		{

			printf("%d",(num>>i)&1);
		}

	}

	return 0;

}

