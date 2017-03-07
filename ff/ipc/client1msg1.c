#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<string.h>
struct msgbuf1
{
	long mtype1;
	char mtext[20];
} ;
int main()
{
	int msgid;
	struct msgbuf1 v1;
	msgid=msgget(2,IPC_CREAT|0660);
        v1.mtype1=1;
	if(msgid==-1)
	{
		perror("id creation failed");
	}
	else
	{
		printf("msdid:%d , pid:%d\n",msgid,getpid());
	while(1)
	{
 		 printf("waiting\n");
  		//getchar();
  		if(msgrcv(msgid,&v1,20,v1.mtype1,0)==-1)
  		{
    			perror("error in messagfe receive\n");
  		}
 		else
  		{
    			printf("%d: %s\n",getpid(),v1.mtext);


    		if(strcmp(v1.mtext,"quit")==0)
         		break;
  		}
	}

}

	return 0;
}


