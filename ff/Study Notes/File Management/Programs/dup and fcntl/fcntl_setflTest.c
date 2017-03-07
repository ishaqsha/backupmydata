#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void testfcntl_setfl(int fd)
{
	int cur_flg = fcntl(fd ,F_GETFL);
	printf("cur_flg = %x \n" , cur_flg);
	int new_flg = cur_flg | O_APPEND;
	fcntl(fd,F_SETFL , new_flg);
	cur_flg = fcntl(fd , F_GETFL);
	
	if(cur_flg != -1)
		printf("cur_flg = %x \n" , cur_flg);

}

int main()
{
	printf("\n TESTING FCNTL F_GETFL and F_SETFL \n");
	int fd = open("test.txt" ,  O_WRONLY);

	write(fd , "1234" , 4);
	testfcntl_setfl(fd);
	write(fd , "5678" , 4);

}
