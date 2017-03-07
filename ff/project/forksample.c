#include<stdio.h>
#include<unistd.h>
int val=10;
int main()
{
	pid_t pid,pid1;
	pid=fork();
if(pid<0)
    {
      		perror("fork creation failed\n");
    }
else if(pid==0)
	{       while(1)
		{
		 sleep(8);
		printf("i am in child process\n");

		val=val+1;
		printf("i amn child addres and value %p %d\n",&val,val);

	}
}
else
{               
               while(1)
               {
		printf("i am in parent\n");	
		printf("i am in parent printting child id pid %d",pid);
		val=val+1;
		printf("addres of val in parent and its val %p %d\n",&val,val);
		sleep(4);
               }
}

return 0;
}
