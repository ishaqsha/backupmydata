#include<stdio.h>
void bin(int);
void octal(int *);
int count=0;
main()
{
 int num=25;
// int k;
bin(num);
//for(i=0;i<cnt;i++)
//print("%d",p[i]);


}
void bin(int num)
{
 int a[100]={},b[100]={},i=0,k=0,j;
 while(num>0)
{
 int rem;
   rem=num%2;
 a[i]=rem;
 i++;
count++;
num=num/2;
}
printf(" count 1st is %d\n",count);
for(j=i-1;j>=0;j--)
{
 b[k++]=a[j];
//printf("%d ",a[j]);
}
for(i=0;i<count;i++)
{
printf("%d",b[i]);
}
printf("\n");
printf("count is %d\n",count);
octal(a);
}
void octal(int b[])
{
int i=0,k,oct[20],t; 
for(k=0;k<count;k++)
printf("%d",b[k]);
printf("\n");
int p =0;
while(i<count)
{
int j=2,result=0;
for(j=0;j<3;j++)
{
    result=result+((1<<j)*b[i++]);
     //i++;
    //j--;
    //count--;
}
oct[p++]=result;
for(t=p-1;t>=0;t--)
printf("%d",oct[t]);
}
}
