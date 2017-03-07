#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
main()
{
      int  pipefd [2] = {0,0}, n;
      char buff[100] ;

#ifdef OPEN
	open(__FILE__ , O_RDONLY);
#endif
	
      if( pipe( pipefd) == -1)
      {
        printf("can not create pipe \n");
	return 1;
      }
	printf(" %d %d \n",pipefd[0] , pipefd[1]);
}
	
