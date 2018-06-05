#include<stdio.h>
union A
{

int a;

}v;
int main()
{
printf("enter the no.\n" );
scanf("%d",&v.a);
int i,j,tmp;
char *p;
p=&v.a;
for(j=3,i=0;i<j;i++,j--)
{
tmp=p[j];
p[j]=p[i];
p[i]=tmp;

}
printf("%d\n",*p);
return 0;
}


