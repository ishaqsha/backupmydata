#include <fcntl.h>

int main(int argc,char *argv[])
{
	if(argc < 2)
	{
		printf("Please enter the file name as argument :");
		exit(1);
	}
	int fd1 = open(argv[1] , O_RDONLY);
	if(fd1 == -1)
	{
		printf("FILE NOT FOUND ");
		exit(2);
	}

	int fd2 = open(argv[1] , O_RDONLY);
	
	printf("Reading first 10 characters using descriptor 1 ");
	char str1[20] = "";
	char str2[20] = "";

	read(fd1 , str1 , 10);
	printf("str1 = %s \n",str1);

	read(fd2 , str2 , 10);
	printf("str2 = %s \n",str2);
	
 	close(fd1);
	close(fd2);

}
