#include<stdio.h>
int cnt=5;
void f1(int *,int);
main()
{
int a[5]={1,2,3,4,5},i;
int num=5;
f1(&a[0],num);
for(i=0;i<cnt;i++)
{
printf("%d ",a[i]);
}
}
void f1(int *p,int num)
{
int i;
for(i=0;i<cnt;i++)
{
 p[i]=p[i]*num;
}
}
