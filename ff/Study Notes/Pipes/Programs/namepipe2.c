#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main()
{
	int  fd , r;

	char buff[10] = "CRANES";
	

	fd = open("mypipe",O_WRONLY);
	printf("fd = %d \n",fd);
	r = write(fd , buff , strlen(buff));
	
	printf("Number of bytes written = %d" , r);
}
