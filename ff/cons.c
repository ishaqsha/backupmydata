#include<stdio.h>
// int i=10;
main()
{
const int i=10;
int *p;
p=&i;
printf("%d %d\n",*p,i);
(*p)++;
printf("%d %d\n",*p,i);
}
