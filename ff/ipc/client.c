#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid;
int p[2];
pipe(p);
int fd;
//fd=open("1.txt",O_RDWR);
pid=fork();
char str[]="ishaque";
char buff[20];
int v;
if(pid<0)
{
 perror("fork creation failed\n");
}
else if(pid==0)
{
	close(p1[1]);
	printf("i am in parent writing\n");
	read(p1[0],&buff,8);
	printf("%s\n",buff);
	close(p1[0]);
        wait(&v);
}
else
{
close(p[0]);
printf("i am reading it now\n");
//str[]="ishaque"
write(p[1],&str,strlen(str));
exit(1);
close(p[1]);
}
}
