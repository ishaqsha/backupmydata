#include<stdio.h>
union ft
{
 unsigned int a;
float f;
}
main()
{
union ft v;
int i;
v.a=12;
//v.f=12.5;
//printf("enter the float value\n ");
//v.a=(ft (v.f)*)&v  .f;
for(i=31;i>=0;i--)
{
 printf("%x",((v.a)>>i)&1);
}
}
