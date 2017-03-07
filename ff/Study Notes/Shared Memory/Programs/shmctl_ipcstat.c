#include <stdio.h>
#include <sys/shm.h>
#include <sys/ipc.h>

int main()
{
 key_t key = 0;
 printf("Enter the key : ");
 scanf(" %d",&key);
 int shmid = shmget(key , 50 , IPC_CREAT | 0666);
 struct shmid_ds  buf;
 shmctl(shmid,IPC_STAT,&buf);

 printf("Size = %d \n",buf.shm_segsz);
 printf("Last attach time = %s \n",ctime(&buf.shm_atime));
 printf("Last detach time = %s \n",ctime(&buf.shm_dtime));
 printf("pid of creator = %d \n",buf.shm_cpid);

}
