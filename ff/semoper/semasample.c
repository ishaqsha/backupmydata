#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
int main()
{
semaphore s1=0,s2=1;
pid_t pid;
pid=fork();
if(pid<0)
{
perror("fork creation should be failed\n");
}
else if(pid==0)
{
 wait(s2);
printf("i am in child\n");
printf("child id is %d s1:%d and s2:%d\n",s1,s2,getpid());
signal(s1);
}
else
{
wait(s1);
printf("i am in parent\n");
printf("i am in parent %d s1: %d and s2:%d value\n",s1,s2,getpid());
signal(s2);
}
return 0;
}
