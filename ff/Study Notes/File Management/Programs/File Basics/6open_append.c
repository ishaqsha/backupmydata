 
/* Pgm to write data to file */
#include <stdio.h>
#include <fcntl.h>

int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		printf("Wrong no. of arguments ");
		return 1;
	}
	int fd = open(argv[1] , O_WRONLY | O_CREAT | O_APPEND , 0666);

	if(fd == -1)
	{
		printf("Unable to open file ");
		return 1;
	}
	else
		printf("File opened successfully");
	printf(" fd = %d " ,fd);
	
	char str[40] = "";
	puts("Enter the string : ");
	fgets(str , 39 , stdin);
	int len = strlen(str);
	if(write(fd , str , len) == len)
		printf("Data written Successfully");
	else
		printf("Unable to write");
	
	return 0;
}


