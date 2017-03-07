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

	struct stat obj;

	if(stat(filename ,  &obj) != 0)
	{
		perror("stat");
		exit(1);
	}
	printf("size   = %d \n" , obj.st_size);
	printf("inode  = %d \n" , obj.st_ino);
	printf("Links  = %d \n" , obj.st_nlink);
	printf("Device = %d \n" , obj.st_dev);
	printf("block size = %d \n" , obj.st_blksize);
	printf("number of blocks = %d \n" , obj.st_blocks);
	
}
