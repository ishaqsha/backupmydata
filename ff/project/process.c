#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>


struct data
	{
	long rx_packet;
	long tx_packet;
	int speed;
	}DATA;
int receive_packet();
int transfer_packet();
int main(void)
	{
	pid_t pid,pid1;
	FILE *fptr;
	int recv_pack1;
	int  recv_pack2;
	int  recv_pack;
        int trans_pack1;
	int trans_pack2;
	int trans_pack;
	int packet_speed;
	pid = fork();
	if (pid < 0) 
		{
		perror("creation of fork failed\n");
		return 1;
		}
	else if (pid == 0) 
		{
		pid1=getppid();
		recv_pack1 = receive_packet();
		printf(" receive packet 1 is%d\n",recv_pack1);
		sleep(1);
		recv_pack2= receive_packet();
		printf("receive packet 2 is %d\n",recv_pack2);
		recv_pack= recv_pack2-recv_pack1;
		printf("Number of receiving packet per second is %d packets/second\n",recv_pack);
		}
	else 	
		{
		pid1=getpid();
		wait(NULL);
		}
 	pid = fork();
	
	if (pid < 0) 
		{
		perror("creation of fork failed\n");
		return 1;
		}
	else if (pid==0)
            {
                        printf("parent id od child is %d\n",getppid());
		       if(getppid()==pid1)
                        {
                                 recv_pack1 = receive_packet();
                printf("%d\n", recv_pack1);
                sleep(1);
                 recv_pack2= receive_packet();
                printf("%d\n", recv_pack2);
                recv_pack=recv_pack2 - recv_pack1;
                printf("Number of receiving packet per second is %d packets/second\n", recv_pack);
                }
           }

       else{
                        printf("%d id of parent\n",getpid());
			trans_pack1 = transfer_packet();
			printf("trans packet 1 is %d\n",trans_pack1);
			sleep(1);
			trans_pack2 = transfer_packet();
			printf("trans packet 2 is %d\n",trans_pack2);
			trans_pack = trans_pack2-trans_pack1;
			printf("Number of transfering packets per second is %d packets/second\n",trans_pack);
	}
return 0;
}

int receive_packet()
	{
	FILE* file = fopen ("/sys/class/net/eth0/statistics/rx_packets", "r");
	int i = 0;
	fscanf (file, "%d", &i);    
	while (!feof (file))
		{  

	              fscanf (file, "%d", &i); 
	               	return i;     
		}
	fclose (file);
	}

int transfer_packet()
	{
	FILE* file = fopen ("/sys/class/net/eth0/statistics/tx_packets", "r");
	int i = 0;
	fscanf (file, "%d", &i);    
	while (!feof (file))
		{  
	fscanf (file, "%d", &i); 
		return i;     
		}
	fclose (file);
	}
