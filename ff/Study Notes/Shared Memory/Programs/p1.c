#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main()
{
	key_t key = 300;
	system("ipcs");
	int shmid = shmget(key , 50 , IPC_CREAT | 0666);
	if(shmid == -1)
	{
		perror(" ");
		exit(1);
	}

	int *ptr = (int *)shmat(shmid,NULL,0);
	putchar('\n');
	system("ipcs");
	if((int)ptr != -1)
	{
		int i;
		for(i = 0 ; i < 5 ; i++)
		{
			ptr[i] = i + 5;
			//ptr++;
		}
		shmdt(ptr);
	putchar('\n');
	system("ipcs");
	}
	else
		perror("shmat");
	
}
