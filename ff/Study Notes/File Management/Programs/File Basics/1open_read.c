
 #include <fcntl.h>


int main()
{
	int fd = open("myfile.txt" , O_RDONLY);

	if(fd == -1)
		printf("Unable to open file ");
	else
		printf("File opened successfully");
	printf(" fd = %d " ,fd);
	

}
