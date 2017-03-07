#include<stdio.h>
#include<pthread.h>
int v1=10;
//sem_t s;
pthread_mutex_t m1;
void *thread1(void *arg)
{
pthread_mutex_lock(&m1);
//int v;
//v=*(int *)arg;

v1=v1+10;
printf(" thread 1 v1  value of a is %d\n",v1);
printf("i amin thread1\n");
sleep(10);
printf("i am stil in thread1\n");
printf("i am shaikh in thread1\n");
pthread_mutex_unlock(&m1);
//pthread_exit("i am exiting from threa1\n");
}
void *thread2(void *arg)
{
//pthread_mutex_lock(&m1);
//printf("i am in thread 2 %s\n",(char *)arg);
v1=v1-10;
printf(" i am printing thread 2 value %d\n",v1);
printf("i amin thread2\n");
printf("**********************\n");
printf("#####################\n");
printf("@@@@@@@@@@@@@@@@@@@@@\n");
printf("PPPPPPPPPPPPPPPPPP\n");
//pthread_mutex_unlock(&m1);
// pthread_exit("i am exiting from threa2\n");


}
void *thread3()
{
//pthread_mutex_lock(&m1);
//printf("i am in thread 3 %s\n",(char *)arg);
v1=v1*10;
printf(" i am printing thread 3 value %d\n",v1);
printf("i amin thread333333333\n");
printf("**************thread33333********\n");
printf("#####################thread33333\n");
printf("@@@@@@@@@@@@@@@@@@@@thresad33333@\n");
printf("PPPPPPPPPPPthread333333PPPPPPP\n");
}


int main()
{
       int res,i;
       res=pthread_mutex_init(&m1,NULL);
        int a=10;
        //void *thred1;
	//void *thred2;
	pthread_t tid1;
	pthread_t tid2,tid3;
       
      
        pthread_create(&tid1,NULL,&thread1,(void *)&a);
  	//sleep(10);
	pthread_create(&tid2,NULL,&thread2,(void *)"i am shaikh");
	//sleep(5);
        pthread_create(&tid3,NULL,&thread3,(void *)0);
     
        pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
        pthread_join(tid3,NULL);

	//pthread_mutex_destroy(&m1);
       //printf(" printing exit valu of thread1 %s\n",(char *)thred1);
       //printf(" printing exit valu of thread2 %s\n",(char *)thred2);
      
}

