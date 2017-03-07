#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<string.h>
#include<sys/msg.h>
#define MSG_EXCEPT 5
struct msgbuf
{
	long mtype;
	char mtext[20];
} ;
int main()
{
	int msgid,i=1;
	struct msgbuf v;
	msgid=msgget(7,IPC_CREAT|0660);
       // v.mtype=1;
	if(msgid==-1)
	{
		perror("id creation failed");
	}
	else
	{
		printf("msdid:%d , pid:%d\n",msgid,getpid());
	while(i<10)
	{
 		 printf("waiting\n");
  		//getchar();
                
  		if(msgrcv(msgid,&v,20,-4, 0)==-1)
  		{
    			perror("error in messagfe receive\n");
  		}
 		else
  		{
    			printf(" %s\n",v.mtext);
                       // v.mtype=i+2;
                        //i=i+2;

    		if(strcmp(v.mtext,"quit")==0)
         		break;
  		}
	}

}

	return 0;
}


