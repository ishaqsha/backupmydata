#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
 	printf("\n TESTING FCNTL F_DUPFD \n");
        int fd1 = open("test1.txt" ,  O_WRONLY);
        int fd2 = open("test1.txt" ,  O_WRONLY);
	int x;
 
       printf("fd1 = %d fd2 = %d \n" , fd1 , fd2);

#ifdef DUP2
	x = dup2(fd1 , fd2);	
#else
	x = fcntl(fd1, F_DUPFD , fd2);
#endif
	printf("x = %d " , x);
	
	return 0;
}

