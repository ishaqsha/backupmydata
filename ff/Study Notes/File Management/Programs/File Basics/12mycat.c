#include <fcntl.h>
int main(int argc,char *argv[])
{
	int fdr;
	if(argc == 1)
	{
		fdr = 0;
	}
	else
	{ 
		fdr = open(argv[1] , O_RDONLY);
		if(fdr == -1)
		{
			printf("Source File not present ");
			return 1;
		}
	}

	int fdw = 1;
	
	char buf[50];

	int n;
	while(n = read(fdr , buf , 50))
		write(fdw , buf , n);

	close(fdr);
	close(fdw);
	return 0;
}
