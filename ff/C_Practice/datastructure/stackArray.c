#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
#define SIZE  10
int stack[SIZE],top=-1;
int main()
{


	char ch;
	int val;
	while(1)
	{
		printf("enter the choice\n");
		scanf(" %c",&ch);

		switch(ch)
		{

			case 'a': push(val);
				  break;
			case 'r': pop();
				  break;
			case 'd':display();
				 break;
			default: printf("i am in default\n");
				 exit(1);
		}

	}
	return 0;
}
void push(int val)
{
	if(top==SIZE-1)
	{
		printf("stack is overflow\n");
		exit(1);

	}

	else
	{
		top=top+1;
		
		printf("enter the valuer\n");
		
		scanf("%d",&val);
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf(" stack is underflow \n");
		exit(1);
	}
	else
	{
		printf("element is deleted %d\n",stack[top]);
		top=top-1;
	}

}

void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("i am printing stack %d \n",stack[i]);
	}
}




