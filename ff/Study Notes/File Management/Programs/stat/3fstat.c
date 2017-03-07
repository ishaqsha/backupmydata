#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
void teststat(char *filename);
int main(int argc,char *argv[])
{
	if(argc == 2)
		teststat(argv[1]);
}

void teststat(char *filename)
{
	printf("\n TESTING STAT  \n");

	int fd = open(filename , O_RDONLY);

	struct stat obj;
	if(fstat(fd ,  &obj) != 0)
	{
		perror("stat");
		exit(1);
	}
	printf("Device = %d \n" , obj.st_dev);
	printf("inode  = %d \n" , obj.st_ino);
	printf("Mode   = %o \n" , obj.st_mode);
	printf("size   = %d \n" , obj.st_size);
	printf("block size = %d \n" , obj.st_blksize);
	printf("number of blocks = %d \n" , obj.st_blocks);
	
}
