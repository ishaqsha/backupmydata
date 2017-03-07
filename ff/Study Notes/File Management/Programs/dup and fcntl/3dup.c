#include <stdio.h>
#include <fcntl.h>


int main()
{       
	int oldfd = open("file.txt" , O_WRONLY | O_CREAT  | O_TRUNC , 0666);
	int newfd;
	printf("Old fd = %d \n" , oldfd);
#ifdef DUP
	newfd = dup(oldfd);
#else
	newfd = open("file.txt" , O_WRONLY);
#endif

	printf("New fd = %d \n" , newfd);
	
	write(oldfd ,"ABCD",4);

	write(newfd,"QWER",4);
}

