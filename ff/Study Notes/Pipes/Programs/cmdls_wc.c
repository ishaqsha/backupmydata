
/* PARENT WRITES AND CHILD READS */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main()
{
      int  fd [2] = {0,0}, n;	
      if( pipe( fd) == -1)
      {
        printf("can not create pipe \n");
	return 1;
      }
      

	if(fork() == 0)
	{
		close(fd[0]);
		dup2(fd[1] , 1);
		execlp("ls","ls",0);
	/*	close(fd[1]);
		dup2(fd[0] , 0);
		execlp("wc","wc",0);
	*/
	}
	else
	{
	/*	close(fd[0]);
		dup2(fd[1] , 1);
		execlp("ls","ls",0); */
		close(fd[1]);
		dup2(fd[0] , 0);
		execlp("wc","wc",0);
	}
		

}
	
