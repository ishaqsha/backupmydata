 
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
	int fd = open(argv[1] , O_RDONLY );

	if(fd == -1)
	{
		printf("Unable to open file ");
		return 1;
	}
	else
		printf("File opened successfully");
	
	char str[40] = "";
	int len;
	while((len = read(fd , str , 40)) != 0)
	{
		str[len] = '\0';
		puts(str);
	}

}








