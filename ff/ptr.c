#include<stdio.h>
void f(int,int,int *,int *);
main()
{
int *p1,*p2,v1=10,v2=5,v3,v4;
//p1 = &v3;
//p2 = &v4;
f(v1,v2,p1,p2);
printf("%d %d",*p1,*p2);
}
void f(int v1,int v2,int *p1,int *p2)
{
//static int v3;
p1=v1+v2;
//p1=&v3;
p2=v1-v2;
//p2=&v3;

}
