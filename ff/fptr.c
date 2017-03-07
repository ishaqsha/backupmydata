#include<stdio.h>
#include<stdlib.h>
char s1[20]="shaikh";
void f(char **p)
{
//p=malloc(20*sizeof(char));
//printf("enter the string");
//scanf("%s",p);
*p=(char*)&s1;
printf("%s\n",*p);
//return *p;
}
main()
{
char *p;
printf("p %p\n",p);
printf("&p %p\n",&p); 
f(&p);
printf("after %s",p);

printf("&fter p %p\n",&p); 
}
/*void f(char **p)
{

printf("p %p\n",p);

printf("&p %p\n",&p);
}*/
