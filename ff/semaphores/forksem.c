#include<stdio.h>
#include<unistd.h>
#include<semaphore.h>
#include<sys/types.h>
#include<pthread.h>
#include<fcntl.h>
char buff[20];
sem_t s1;
int main()
{
	sem_t *s;
	s=sem_open("/forksem",O_CREAT,0777,1);
	//printf("value retur by sem_open is %d\n",s);
	pid_t pid;
	pid=fork();
	FILE *fp;
	int i=0;
	fp=fopen("file2.txt","w+");
	if(pid<0)
	{
		printf("fork creation failed");
	}
	else if(pid==0)
	{
		while(i<5)
		{
		printf("i am in child\n");

	        fprintf(fp,"ishaque\n");
		sem_post(&s1);
		i++;
	}
}
	else
	{
		while(i<5)
		{
		sem_wait(&s1);
		printf("i am in parent\n");
		fread(&buff,1,100,fp);
	 	printf("i am in parent %s\n",buff);
		i++;
	}

}
}
		
