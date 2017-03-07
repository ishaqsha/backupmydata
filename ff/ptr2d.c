#include<stdio.h>
main()
{
int arr[3] = {1,2,3};
int (*p)[3]= arr;
printf("%d\n",p[1][1]);
}
