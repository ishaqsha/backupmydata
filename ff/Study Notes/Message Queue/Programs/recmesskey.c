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
	int messtype = 30;
	msgrcv(my_id , &message1 , sizeof(message1) , messtype , 0);
	printf("Recieved Message = %s " , message1.messdata);

	return 0;
}
