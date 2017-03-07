#include<stdio.h>
#include<stdlib.h>
int *f1(int);
main()
{
int *ptr,index;
//ptr=(int *)malloc(100000*sizeof(int));
ptr=f1(1);
for(index=0;index<99500;index++)
printf("%d ",ptr[index]);
}
int *f1(int a)
{
 int *ptr,index;
//ptr=(int *)malloc(100000*sizeof(int));
int myarr[100000];
for(index=0;index<99500;index++)
{
myarr[index]=a++;
}
ptr=&myarr[0];
return ptr;
}
