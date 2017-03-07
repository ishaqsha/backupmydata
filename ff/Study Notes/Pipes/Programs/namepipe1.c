#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main()
{
	int ret , fd , r;

	char buff[10];
	
	ret = mknod("mypipe",S_IFIFO | 0666 , 0);

	fd = open("mypipe",O_RDONLY);
	printf("fd = %d \n",fd);
	r = read(fd , buff , sizeof(buff));
	buff[r] = '\0';
	printf("content from pipe : %s " , buff);
}