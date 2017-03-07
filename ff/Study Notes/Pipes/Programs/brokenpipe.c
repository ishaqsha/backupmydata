#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void myhandler(int signo)
{
	printf("SIGNAL HANDLER \n");
	printf("Signal number = %d \n" , signo);
}

main()
{
      int  pipefd [2] = {0,0}, n;	
      if( pipe( pipefd) == -1)
      {
        printf("can not create pipe \n");
	return 1;
      }
	
	signal(SIGPIPE , myhandler);

#ifdef CLOSEREAD
	close(pipefd[0]);	
#endif
	
      if(write (pipefd[1],"hello world\n", 12)!= 12)
      {
        printf("pipe write error \n");
      }
}
	
