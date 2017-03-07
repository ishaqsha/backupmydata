#include <fcntl.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
	if(argc != 2)
	{
		printf("Wrong no. of arguments \n");
		return 1;
	}

	int fdr = open(argv[1] , O_RDONLY);
	if(fdr == -1)
	{
		printf("Source File not present ");
		return 1;
	}
	
	int n = lseek(fdr , 0 , SEEK_END);
	printf("No. of characters in file = %d " , n);
	return 0;
}
