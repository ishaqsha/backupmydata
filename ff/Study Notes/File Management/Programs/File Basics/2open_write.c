#include <fcntl.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		printf("Wrong no. of arguments ");
		return 1;
	}
	int fd = open(argv[1] , O_WRONLY);

	if(fd == -1)
		printf("Unable to open file ");
	else
		printf("File opened successfully");
	printf(" fd = %d " ,fd);
	
	return 0;
}
