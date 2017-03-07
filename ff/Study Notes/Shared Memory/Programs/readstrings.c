#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include<stdlib.h>
int main()
{
	key_t key = 200;

	int shmid = shmget(key , 50 , IPC_CREAT | 0666);
	if(shmid == -1)
	{
		perror(" ");
		exit(1);
	}

	char *const ptr = (char *)shmat(shmid,NULL,0);
	int i;
	for(i = 0 ; i < 5 ; i++)
        {
        	printf(" %d string : %s \n",i+1,ptr +(i*10));
        }

	
}
