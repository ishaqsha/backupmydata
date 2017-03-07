#include<stdio.h>
#include<string.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
int fd1,len;
char str1[20];
fd1=open("myfifo",O_RDONLY);
printf("reading the strng from server the string\n");
len=strlen(str1);
printf("%d strl;rn is\n",len);
read(fd1,str1,20);
printf("%s\n",str1);
close(fd1);
}


