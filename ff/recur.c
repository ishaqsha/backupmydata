#include<stdio.h>
int f1(int);
main()
{
int num=10;
//printf("enter the num");
//scanf("%d",&num);
printf("%d %d",num,f1(num));
//f1(1);
}
int f1(int num)
{
 if(num==1)
 return 1;
printf("%d",num);
return(f1(--num));
//printf("%d",num);
//f1(num+1);
}
