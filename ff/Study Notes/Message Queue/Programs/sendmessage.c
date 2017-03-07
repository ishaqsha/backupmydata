#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct mymess
{
	int messtype;
	char messdata[20];
};

int main()
{
	key_t key = 6;
	int my_id = msgget(key , IPC_CREAT | 0666);
	if(my_id == -1)
	{
		perror("");
		exit(1);
	}
	printf("my id = %d \n" , my_id);

	struct mymess message1;
	message1.messtype = 10;
	strcpy(message1.messdata , "first message");
	msgsnd(my_id , &message1 , sizeof(message1) , IPC_NOWAIT);

	message1.messtype = 20;
	strcpy(message1.messdata , "Second message");
	msgsnd(my_id , &message1 , sizeof(message1) , IPC_NOWAIT);
	
	message1.messtype = 30;
	strcpy(message1.messdata , "Third message");
	msgsnd(my_id , &message1 , sizeof(message1) , IPC_NOWAIT);
	
}
