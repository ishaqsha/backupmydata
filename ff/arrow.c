#include<stdio.h>
struct s1
{
int num;
int *p;
}v1,*v2;
main()
{
v2=&v1;
v1.p=&v1.num;
(*v2).num=5;
v2=&v1;
printf("%d %d",(*v2).num,*(v1->p));
}
/*void (*fp)();
fp=f1;
fp();
/*fp();
(*fp)();
}
void f1()
{
 printf("i am f1\n");
}*/

