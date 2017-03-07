#include<stdio.h>
struct person
{
char name[20];
int id;
char grade[30];
}det[3]={{},{},{"sha"}};
main()
{
printf("%s\n",det[2].name);
}
