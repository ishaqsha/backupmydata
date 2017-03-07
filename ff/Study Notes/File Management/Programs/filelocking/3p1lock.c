#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd = open("myfile.txt" , O_RDWR | O_APPEND);

	if(fd < 0)
	{
		perror("p1 FD : ");
		return 1;
	}
	printf("p1 fd = %d \n",fd);
	int i;

	struct flock  lock ;
	lock.l_type = F_WRLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 0;
	lock.l_pid = getpid();
	
	if( fcntl(fd , F_SETLK , &lock) == -1)
	{
		perror("p1");
		exit(0);
	}

	for(i = 0 ; i < 10 ; i++)
	{
		write(fd , "A",1);
		putchar('A'); fflush(stdout);
		sleep(1);
	}
	close(fd);
	return 0;
}
