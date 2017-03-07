#include<stdio.h>

struct s
{
 
 int (*fp)();
};
int f1();
main()
{
struct s v1;
int k;
v1.fp=f1;
k=v1.fp();
printf("%d",k);
}
int f1()
{
int i=10;
 return i;
}
