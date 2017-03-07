#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void testfcntl_getfl();

int main()
{
	testfcntl_getfl();
}

void testfcntl_getfl(int mode)
{
	printf("\n TESTING FCNTL F_GETFL  \n");
	int fd = open("test1.txt" ,  O_WRONLY);
	printf("fd = %d \n" , fd);
	int cur_flg = fcntl(fd ,F_GETFL);
	printf("cur_flg = %d \n" , cur_flg);
}
