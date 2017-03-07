#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main()
{
      int  pipefd [2] = {0,0}, n;	
      if( pipe( pipefd) == -1)
      {
        printf("can not create pipe \n");
	return 1;
      }

      char output[] = "hello world\n";
	char input[20]= "SIKANDER";
		
	if (write (pipefd[1],output, sizeof(output))!= sizeof(output))
      {
        printf("pipe write error \n");
      }
      if(  ( n = read ( pipefd[0] , input, sizeof (input)  ) ) <= 0 )
      {
        printf("pipe read error \n");
      }

	puts(input);
}
	
