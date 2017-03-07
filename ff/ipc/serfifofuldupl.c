#include<stdio.h>
#include<string.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	FILE *fd,*fd1;
	char str1[20];
	char str2[20];
	pid_t pid1;
	fd1=fopen("myfifo1","r");
	fd=fopen("myfifo2","w");
	pid1=fork();
	if(pid1==0)
	{
		while(1)
		{
			printf("reading the strng from server the string\n");
			fread(str2,20, 1, fd1);
			printf("%s\n",str2);
			sleep(5);
			//fclose(fd1);
		}
	}
	else
	{
		while(1)
		{
			printf("enter the string\n");
			scanf("%s",str1);
			getchar();
			fwrite(str1,20, 1, fd);
			fflush(fd);

			sleep(5);
			//fclose(fd);
		}
	}

}
