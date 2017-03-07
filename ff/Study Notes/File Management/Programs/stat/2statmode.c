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
	printf("Mode - %o \n" , obj.st_mode); 

	if(obj.st_mode & 0400)
		puts("User - Read ");	
	if(obj.st_mode & 0200)
		puts("User - Write ");	
	if(obj.st_mode & 0100)
		puts("User - Execute ");	

	if(obj.st_mode & 040)
		puts("Group - Read ");	
	if(obj.st_mode & 020)
		puts("Group - Write ");	
	if(obj.st_mode & 010)
		puts("Group - Execute ");	

	if(obj.st_mode & 04)
		puts("Other - Read ");	
	if(obj.st_mode & 02)
		puts("Other - Write ");	
	if(obj.st_mode & 01)
		puts("Other - Execute ");	
	
}
