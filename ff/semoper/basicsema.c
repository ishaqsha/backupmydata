#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include<unistd.h>
 void die(char *msg)
 {
   perror(msg);
     exit(1);
 }
int main()
{
   int i,j;
   int pid;
   int semid; /* semid of semaphore set */
   key_t key ; /* key to pass to semget() */
   int semflg = IPC_CREAT | 0666; /* semflg to pass to semget() */
   int nsems = 1; /* nsemcghgffaghs to pass to semget() */
   //int nsops; /* number of operations to do */
   struct sembuf *sops = (struct sembuf *) malloc(2*sizeof(struct sembuf));
   /* ptr to operations to perform */
   /* generate kestruct sembuf *sops = (struct sembuf *) malloc(2*sizeof(struct sembuf));
   /* ptr to operations to pey */
if ((key = ftok("basicsema.c", 'Q')) == -1) 
{
           die("ftok");
}
 /* set up semaphore */

 //printf("\nsemget: Setting up semaphore: semget(%#lx, %\ %#o)\n",key, nsems, semflg);

if ((semid = semget(key, nsems, semflg)) == -1)
            die("semget: semget failed");

if ((pid = fork()) < 0)
{
     die("fork failed");
}
if(pid==0)
{

      /*i am in child*/
         while(1)
       {
	/*wait for semaphore to reach zero*/
 	sops[0].sem_num=0;          //we only use one track
	sops[0].sem_op=0;          //wait for semaphore flag to become zero
	sops[0].sem_flg=SEM_UNDO ;  //takeoff semaphore asynchronous
	sleep(3);
       /* sops[1].sem_num=0;      
        sops[1].sem_op=1;          //incremaent the semaphore -- take control of track
        sops[1].sem_flg=SEM_UNDO | IPC_NOWAIT;   //takeoff semaphore asynchronous*/
       printf(" i am in child  printing child id %d\n",getpid());
	 printf(" i am in child i am printing child\n");
         printf("i am in child i am printing child2\n");

      //recape the call to be made
 }
}
else
{
	while(1)
	{
         sops[0].sem_num=0;          //we only use one track
         sops[0].sem_op=1;          //wait for semaphore flag to become zero
         sops[0].sem_flg=SEM_UNDO;   // 
         sleep(3);
         printf("i am in parent i am printing parent id %d\n",getpid());
	 printf("i am in parent i am printing parent1\n");
	 printf("i am in parent i am printing parent2\n");

 	}
}
return 0;
}
