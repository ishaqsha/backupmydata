#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "myheader.h"

int main()
{
	int fd = open(FILENAME , O_RDWR | O_APPEND);

	if(fd < 0)
	{
		perror("p1 FD : ");
		return 1;
	}
	printf("p1 fd = %d \n",fd);
	int i;
	for(i = 0 ; i < 10 ; i++)
	{
		write(fd , "A",1);
		sleep(1);
	}
	close(fd);
	return 0;
}
