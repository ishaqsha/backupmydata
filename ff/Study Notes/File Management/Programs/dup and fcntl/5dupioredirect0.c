#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	printf("\n TESTING DUP IO REDIRECT \n");
        int fd;
        fd = open("test1.txt" ,  O_RDONLY);
        printf("fd = %d \n" , fd);
	close(0);
        int newfd = dup(fd);	//As fd 0 is closed, 0 will be the newfd
        printf("new fd = %d \n" , newfd);

	char str[20] = "";
	printf("Enter a string : ");
	scanf("%s", str);
	printf("str =  %s",str);
	
}

