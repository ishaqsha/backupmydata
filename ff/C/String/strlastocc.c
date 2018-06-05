#include<stdio.h>
#include<string.h>
char * my_str(char str[][10],int,char *);
int main()
{
char str[5][10]={"ishaq","shaikh","ishaq","shaikh","votar"};
char str1[10]="ishaq";

char (*ptr)[10];
int n=5;
printf("i enter in amin\n");
ptr=(char (*)[])my_str(str,n,str1);
ptr++;
printf("i am after calling funct\n");
printf("%s\n",*ptr);


}

char * my_str(char str[][10],int n,char *str1 )
{
int i,x,j,k;
printf("i am in my_str\n");
for(i=n-1;i>=0;i--)
{

x=strcmp(str[i],str1);
if(x==0)
{
printf("%s\n",str[i]);
//break;
return str[i];
}

}

}

