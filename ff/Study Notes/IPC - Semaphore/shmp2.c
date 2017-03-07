#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main()
{
	key_t key = 200;

	int shmid = shmget(key , 50 , IPC_CREAT | 0666);
	if(shmid == -1)
	{
		perror(" ");
		exit(1);
	}

	int *ptr = (int *)shmat(shmid,NULL,0);
	if((int)ptr != -1)
	{
		int i;
		for(i = 0 ; i < 10 ; i++)
		{
			ptr[i] = 'Z' - i;
			sleep(1);
		}

		printf("Data in memory \n");
		for(i = 0 ; i < 10 ; i++)
		{
			printf(" %c \n",ptr[i]);
		}
		shmdt(ptr);
	}
	else
		perror("shmat");
	
}
