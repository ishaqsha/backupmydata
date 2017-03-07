#include <fcntl.h>
int main()
{
	int fd;

	fd = open("test1.txt" ,  O_WRONLY | O_CREAT | O_EXCL , 0666);
	printf(" %d " , fd);
	if(fd == -1)
		printf("File Already Exist...Unable to Create file ");
	else
		printf("File Success fully created ");
}
