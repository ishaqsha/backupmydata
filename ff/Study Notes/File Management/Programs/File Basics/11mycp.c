#include <fcntl.h>
int main(int argc,char *argv[])
{
	if(argc != 3)
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

	int fdw = open(argv[2] , O_WRONLY | O_CREAT | O_TRUNC , 0666);
	
	char buf[50];

	int n;
	while(n = read(fdr , buf , 50))
		write(fdw , buf , n);

	close(fdr);
	close(fdw);
	return 0;
}
