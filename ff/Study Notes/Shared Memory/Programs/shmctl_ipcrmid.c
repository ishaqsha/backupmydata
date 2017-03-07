#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main()
{
	key_t key = 200;

	int shmid = shmget(key , 50 , IPC_CREAT | 0666);
	struct shmid_ds  buf;
	shmctl(shmid,IPC_RMID,&buf);	
}
