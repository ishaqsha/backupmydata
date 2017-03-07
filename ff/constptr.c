#include<stdio.h>
main()
{
	int num1=5,num2=10,num3=15;
	 int *const ptr1=&num1; // const int *ptr2=&num3;
	ptr1=&num2;
	//(*ptr2)++;
}

