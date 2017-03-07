#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/ipc.h>
struct msgbuf
{
	long mtype;
	char mtext[20];
};
int main()
{
	int msgid,i=1;
	struct msgbuf v;
	v.mtype=1;
	msgid=msgget(7,IPC_CREAT|0660);
	if(msgid==-1)
	perror("id creation failed");
	else
	{
		printf("msdid:%d , pid:%d\n",msgid,getpid());
		//v.mtype=1;
		unsigned count = 0;
		while(i<10)
		{
			
			printf("enter the message\n");
 			scanf("%s",v.mtext);
  			msgsnd(msgid,&v,20,0);
                       // (v.mtype==2)?(v.mtype=1):(v.mtype=2);
                      v.mtype=i+1;
			i=i+1;
			
		}
                msgctl(msgid,IPC_RMID,NULL);		
	}
}
