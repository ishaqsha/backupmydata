#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/sem.h>

void myfunc();

int main()
{
	key_t semkey = 400;
	int semid = semget(semkey,1,IPC_CREAT | 0666);

	if(semid == -1)
	{
		perror("semget ");
		exit(1);
	}

	if(semctl(semid , 0 , SETVAL , 1) == -1)
	{
		perror("semctl ");
		exit(0);
	}
	printf(" %d \n",semctl(semid , 0 , GETVAL ));
	struct sembuf  x = {0, -1 , 0};
	semop(semid , &x ,  1);
	printf(" %d \n",semctl(semid , 0 , GETVAL ));

	myfunc();
	x.sem_op = 1;
	semop(semid , &x ,  1);
	printf(" %d \n",semctl(semid , 0 , GETVAL ));

}
void myfunc()
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
			ptr[i] = 'A' + i;
			sleep(1);
		}
		printf("Data in memory %s \n",__FILE__ );
		for(i = 0 ; i < 10 ; i++)
		{
			printf(" %c \n",ptr[i]);
		}
		shmdt(ptr);
	}
	else
		perror("shmat");
	
}
