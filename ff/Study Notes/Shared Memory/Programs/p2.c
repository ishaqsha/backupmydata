#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main()
{
	key_t key = 300;

	int shmid = shmget(key , 50 , IPC_CREAT | 0666);
	int *ptr = (int *)shmat(shmid,NULL,SHM_RDONLY);
	if(ptr != NULL)
	{
		int i;
		for(i = 0 ; i < 5 ; i++)
		{
			printf(" %d " , ptr[i]);
		}
		shmdt(ptr);
	}
	else
		perror("shmat");	
}
