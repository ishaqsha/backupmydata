#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd = open("myfile.txt" , O_RDWR | O_APPEND);

	if(fd < 0)
	{
		perror("P2 - FD : ");
		return 1;
	}
	printf("p2 -  fd = %d \n" , fd);
  	
	struct flock  lock ;
        lock.l_type = F_WRLCK;
        lock.l_whence = SEEK_SET;
        lock.l_start = 0;
        lock.l_len = 0;
        lock.l_pid = getpid();

        if( fcntl(fd , F_SETLK , &lock) == -1)
        {
                perror("p2");
                exit(0);
        }


	int i;
	for(i = 0 ; i < 10 ; i++)
	{
		write(fd , "B",1);
		putchar('B'); fflush(stdout);
		sleep(1);
	}
	close(fd);
	return 0;
}
