 #include<stdio.h>
main()
{
int a=1,i,j,temp,b;
b=a;
char *p;
p=(char *)&a;
/*for(i=0;i<4;i++)
{
printf("%d   %p ",*p,p);
p++;
}*/
if(*p==1)
{
printf("little endian it follow");
printf("\n");
for(i=0,j=3;i<j;i++,j--)
{
  temp=p[i];
  p[i]=p[j];
   p[j]=temp;
}
}
printf("conerting little to big endian\n");
for(i=0;i<4;i++)
printf("%d",p[i]);
printf("\n");
printf("%d",b);
}
