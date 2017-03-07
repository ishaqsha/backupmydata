#include<stdio.h>

int main()
{
	int  arr[4]={1,2,3,4};
	int (*ptr)[4]=&arr;
	printf("%d\t",(*ptr)[0]);
	printf("%p\t",arr);
	printf("%p",&arr);
}
