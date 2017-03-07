#include<stdio.h>
void f(char **ptr)
{
int v=10;
*ptr=(char *)&v;
printf("i am in f %p %d\n",*ptr, **ptr);
}
main()
{
int b=5;
char *ptr=(char *)&b;
f(ptr);
printf("i am in main:%p %d\n",ptr,*ptr);
}
