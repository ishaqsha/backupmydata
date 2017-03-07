#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void testdup();
void testdup2();
void testfcntl_dupfd();

int main()
{

	testfcntl_dupfd();
}

void testfcntl_dupfd()
{
 	printf("\n TESTING FCNTL F_DUPFD \n");
        int fd = open("test1.txt" ,  O_WRONLY);
        printf("fd = %d \n" , fd);
	int newfd;

#if 1
	// old and newfd passed is same
         newfd = fcntl(fd , F_DUPFD , fd);
	//newfd returned is different from fd because fd is already in use.
        printf("new fd = %d \n" , newfd);
#else
	// old and newfd passed is different
         newfd = fcntl(fd , F_DUPFD , fd + 5);
       //newfd returned is different from fd because fd is already in use.
        printf("new fd = %d \n" , newfd);
	
#endif
}

