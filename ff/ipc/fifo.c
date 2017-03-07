#include<stdio.h>
#include<string.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
int fd;
char str[20];
fd=open("myfifo",O_WRONLY);
printf("enter the string\n");
scanf("%s",str);
write(fd,str,strlen(str));
//close(fd);
//printf("%s\n",str);
}
