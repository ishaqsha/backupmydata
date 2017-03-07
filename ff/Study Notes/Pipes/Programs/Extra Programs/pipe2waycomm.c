#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main()
{
      int  p1[2] = {0,0}, p2[2];
      
	 pipe(p1); 
	 pipe(p2); 
      

	if(fork() == 0)
	{
		printf("CHILD PROCESS \n");
		close(p1[0]);
		close(p2[1]);	
		char cbuf[20] = "";
		
	 	write(p1[1], "HAI FROM CHILD" , 20);	
		read(p2[0] , cbuf , 20);
		printf("child read %s \n",cbuf);
	}
	else
	{
		printf("PARENT PROCESS \n");
		close(p1[1]);	
		close(p2[0]);
		char buffer[20];

		buffer[read(p1[0] , buffer , 20)] = '\0';
		printf("parent read : %s \n",buffer);
		write(p2[1] ,"BYE FROM PARENT \n", 20);
	}
	return 0;
}
	
