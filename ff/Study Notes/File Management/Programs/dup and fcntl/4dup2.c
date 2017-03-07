#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void testdup();
void testdup2();
int main()
{
	testdup();	
	testdup2();
}
void testdup()
{
	printf("\n TESTING DUP \n");
        int fd;

        fd = open("test1.txt" ,  O_WRONLY);
        printf("fd = %d \n" , fd);
        int newfd = dup(fd);
        printf("new fd = %d \n" , newfd);

}

void testdup2()
{
	printf("\n TESTING DUP2  \n");
	int fd = open("test1.txt" ,  O_WRONLY);
	printf("fd = %d \n" , fd);
	int newfd = dup2(fd , 8);
	printf("new fd = %d \n" , newfd);
      printf("\n %d \n" , open("test1.txt" , O_RDONLY));

}
