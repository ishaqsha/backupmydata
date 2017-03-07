#include<stdio.h>
int main(int argc,char *argv[])
{
int index=0,v;
for(index=1;index<argc;index++)
{
system(argv[index]);
sleep(5);
//printf("%d\n",v);
printf(" i am in maion");
}
return ;
}
