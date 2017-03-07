#include<stdio.h>
#include<stdlib.h>
main()
{
//int a[5]={1,2,3,4,5},i;
int *p;
p=malloc(5*sizeof(int));
//p[0] = a[0];
//p[1] = a[1];
//p=a;
//for(i=0;i<5;i++)
//printf("%d",p[i]);
//printf("\n");
printf("%lu",sizeof(p));
printf("\n");
p=realloc(p,9*sizeof(int));
printf("%lu",sizeof(p));
/*for(i=0;i<9;i++)
{
printf("%d",p[i]+2);
}*/
}
