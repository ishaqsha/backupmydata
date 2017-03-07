#include<stdio.h>
#include<sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

main()
{
int fd;
char str[100];
fd=open("1.txt",O_RDONLY);
if(fd==-1)
{
perror("erroe in opening file\n");
}
read(fd,str,100);
printf("%s\n",str);
}
