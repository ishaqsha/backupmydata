#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "myheader.h"

int main(int argc,char *argv[])
{
	if(argc < 2)
	{
		printf("Please enter the filename \n");
		return 1;
	}

	int fd = open(argv[1] , O_RDWR);

	if(fd < 0)
	{
		perror("p1 FD : ");
		return 1;
	}
	printf("p1 fd = %d \n",fd);
	int i;

	struct flock  lock ;
	lock.l_type = F_RDLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 0;
	lock.l_pid = getpid();
	
	if( fcntl(fd , F_SETLKW , &lock) == -1)
	{
		perror("p1");
		exit(0);
	}
	
	char str[5] = "";
	while(read(fd , str , 4) != 0)
	{
		sleep(1);
		write(1,str , 4);
	}
	close(fd);
	return 0;
}
