#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid1;
int p1[2];
pipe(p1);
//fd=open("1.txt",O_RDWR);
pid1=fork();
char str1[]="shaikh";
char buff1[20];
int v;
if(pid1<0)
{
 perror("fork creation failed\n");
}
else if(pid1==0)
{
        close(p[1]);
        printf("i am in parent writing\n");
        read(p[0],&buff1,8);
        printf("%s\n",buff1);
        close(p[0]);
         wait(&v);
}
else
{
close(p1[0]);
printf("i am reading it now\n");
//str1[]="shaikh"
write(p1[1],&str1,strlen(str1));
exit(1);
close(p1[1]);
}
}
