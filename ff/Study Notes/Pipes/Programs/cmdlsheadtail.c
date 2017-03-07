
/* IMPLEMENT ls -l | head -4 | tail -1 */
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
		execlp("ls","ls","-l",0);
	}
	else
	{
		int fd1[2] = {0};

		if(pipe(fd1) == -1)
			printf("Cannot create 2nd pipe ");
		if(fork() == 0)
		{
			close(fd[1]);
			close(fd1[0]);

			dup2(fd[0] , 0);
			dup2(fd1[1] , 1);
			execlp("head","head","-4",0);
		}
		else{
		close(fd[0]);	close(fd[1]);
		close(fd1[1]);
		dup2(fd1[0] , 0);
		execlp("tail","tail","-1",0);
		}
	}
}
	
