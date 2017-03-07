#include <fcntl.h>
#include <stdio.h>

void func()
{
 	int fd = open("test1.txt" ,  O_WRONLY | O_CREAT);
	printf(" %d " , fd);
}
int main()
{
        func();
        func();
	return 0;
}
