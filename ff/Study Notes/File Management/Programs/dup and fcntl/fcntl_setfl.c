#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/* Not functioning */
void testfcntl_setfl();

int main()
{
	printf("\n TESTING FCNTL F_GETFL and F_SETFL \n");
	printf("O_APPEND = %x \n",O_APPEND);
	printf("O_WRONLY = %x \n",O_WRONLY);

	int fd = open("test1.txt" ,  O_WRONLY);
	printf("fd = %d \n" , fd);
	int cur_flg = fcntl(fd ,F_GETFL);
	printf("cur_flg = %x \n" , cur_flg);

	int new_flg = cur_flg | O_APPEND;
	fcntl(fd,F_SETFL , new_flg);
	cur_flg = fcntl(fd , F_GETFL);
	
	if(cur_flg != -1)
		printf("cur_flg = %x \n" , cur_flg);


}
