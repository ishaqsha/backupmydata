#include<stdio.h>
int main()
{
	int num=0x11223344,pos=8,i,n=0;
	int result=0,bit;
//	printf("enter thr num and pos\n");
//	scanf("%d%d",&num,&pos);

	for(i=pos;i<pos+8;i++)
	{
		if(n<8)
		{
		bit=(num>>i)&1;
		printf("bit=%d i=%d n=%d",bit,i,n);
		n=n+1;
		
		result=result+(2^n)*bit;
		}
	}
	printf("result is %d\n",result);
	return 0;

}
