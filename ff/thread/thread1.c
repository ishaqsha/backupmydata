#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
pthread_mutex_t m1;
void *t1()
{
printf("I AM IN THREAD1\n");
printf("****** THREAD1\n");
sleep(10);
printf("&&&&&&&&& THREAD1\n");
printf("####### THREAD1\n");




}
void *t2()
{
pthread_mutex_lock(&m1);
printf("I AM IN THREAD2\n");
printf("@@@@@@@ THREAD2\n");
//sleep(5);
printf("********* THREAD2\n");
printf("~~~~~~~~ THREAD2\n");
pthread_mutex_unlock(&m1);





}
void *t3()
{
printf("$$$$$THREAD3\n");
sleep(5);
printf("^^^^^^^ THREAD3\n");
printf(")))))))))) THREAD3\n");




}
int main()
{
      pthread_t tid1,tid2,tid3;
 
        pthread_create(&tid1,NULL,&t1,(void *)0);
        pthread_create(&tid2,NULL,&t2,(void *)0);
        pthread_create(&tid3,NULL,&t3,(void *)0);
        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);
        pthread_join(tid3,NULL);
 }
