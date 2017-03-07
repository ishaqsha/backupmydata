
/* CHILD WRITES AND PARENT READS */
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
		printf("CHILD WRITES \n");
	//	close(fd[0]);	//Close read
		
		char output[] = "hello world\n";

	 	write(fd[1], output , sizeof(output));	
	}
	else
	{
		char input[20]= "SIKANDER";
		printf("PARENT READS \n");
	//	close(fd[1]);

      if(  ( n = read ( fd[0] , input, sizeof (input)  ) ) > 0 )
	printf("Parent read the data %s \n" , input);

	}
		

}
	
