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
	printf("USING STAT \n");
	printf("inode  = %d \n" , obj.st_ino);
	printf("Mode   = %o \n" , obj.st_mode);
	printf("size   = %d \n" , obj.st_size);

	if(lstat(filename ,  &obj) != 0)
	{
		perror("stat");
		exit(1);
	}
	
	printf("USING LSTAT \n");
	printf("inode  = %d \n" , obj.st_ino);
	printf("Mode   = %o \n" , obj.st_mode);
	printf("size   = %d \n" , obj.st_size);
}
