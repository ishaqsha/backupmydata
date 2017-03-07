#include<stdio.h>
void f1();
void f2(int);
main()
{
f1();
}
void f1()
{
int num=20;
f2(num--);
printf("%d",num);
}
void f2(int v)
{
printf("%d",v);
f2(v--);
}


