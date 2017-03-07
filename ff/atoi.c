#include<stdio.h>
#include <stdlib.h>

main()
{
char s1[20];
int i,j;
int a[20];
printf("enter the string\n");
scanf("%s",s1);
j = atoi(s1);
i= printf("%d\n", j);
for(i=0;s1[i];i++)
{
 a[i]=s1[i]-48;
printf("%d",a[i]);
}
}

