#include <fcntl.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
	if(argc != 3)
	{
		printf("Wrong no. of arguments \n");
		return 1;
	}

	int fdr = open(argv[1] , O_RDWR);
	if(fdr == -1)
	{
		printf("Source File not present ");
		return 1;
	}
	
	char buf;
			//	A - 65	- 0100 0001
			//	a - 97  - 0110 0001
        int n;
        while(n = read(fdr , &buf , 1))
	{
		if(buf == argv[2][0])
		{
			buf = buf ^ 0x20;
			lseek(fdr , -n , SEEK_CUR);
           	     	write(fdr , &buf , n);
		}
	}
	return 0;
}
