#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char *argv[] )
{
	printf("\n TESTING DUP IO REDIRECT \n");
        int fd;
        fd = open(argv[1] ,  O_WRONLY | O_TRUNC | O_CREAT , 0666);
        printf("fd = %d \n" , fd);
	close(1);
        int newfd = dup(fd);	//As fd 1 is closed, 1 will be the newfd

	printf( "SIKANDER " );	
}

