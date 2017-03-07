#include <fcntl.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
	if(argc != 2)
		return 1;
	int fd = creat(argv[1] , 0666);
	printf(" %d " , fd); 
	if(fd > 0)
		printf("%s file created	\n",argv[1]);
	else
		printf("Unable to create file ");
	return 0;
}
