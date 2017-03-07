#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "myheader.h"
int main(int argc,char *argv[])
{
	int fd = open(argv[1] , O_RDWR);

	if(fd < 0)
	{
		perror("P2 - FD : ");
		return 1;
	}
	printf("p2 -  fd = %d \n" , fd);
  	
	struct flock  lock ;
        lock.l_type = F_RDLCK;
        lock.l_whence = SEEK_SET;
        lock.l_start = 0;
        lock.l_len = 0;
        lock.l_pid = getpid();

        if( fcntl(fd , F_SETLKW , &lock) == -1)
        {
                perror("p2");
                exit(0);
        }


	int i;
	char str[10] = "";
	while(read(fd ,str,6) != 0)
	{
		sleep(1);
		write(1,str , 6);
	}
	close(fd);
	return 0;
}
