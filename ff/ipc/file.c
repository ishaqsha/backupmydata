#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("1.txt","w");
while(1)
{
fwrite("rakesh\n",10,1,fp);
//fflush(fp);
//sleep(3);
}
return 0;
}
