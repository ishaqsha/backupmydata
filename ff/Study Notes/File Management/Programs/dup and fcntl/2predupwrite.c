#include <fcntl.h>

int main(int argc,char *argv[])
{
	if(argc < 2)
	{
		printf("Please enter the file name as argument :");
		exit(1);
	}
	int fd1 = open(argv[1] , O_WRONLY | O_CREAT , 0666);
	

	int fd2 = open(argv[1] , O_WRONLY);
	
	char str1[20] = "CRANES";
	char str2[20] = "VARSITY";

	write(fd1 , str1 , 10);

	write(fd2 , str2 , 10);
	
 	close(fd1);
	close(fd2);

}
