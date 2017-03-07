#include<stdio.h>
int pow(int,int);
main()
{
 int base, exp,result;
printf("enter the value");
scanf("%d%d",&base,&exp);
result=pow(base,exp);
printf("%d ",result);
}
int pow(int a,int b)
{
 int result=1,i;
 for(i=1;i<=b;i++)
 {
  result=result*a;
 }
return result;
}
