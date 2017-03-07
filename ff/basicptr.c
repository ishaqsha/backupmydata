#include<stdio.h>
main()
{
 int arr[5]={1,2,3,4,5},i;
for(i=0;i<5;i++)
{
printf("1st elemnt addr %p  %d\n",&arr[i],arr[i]);
}
printf("i am printing one by one");
printf("%p %p %p %p %p %p\n",&arr,&arr+0,&arr+1,&arr+2,&arr+3,&arr+4);
}
