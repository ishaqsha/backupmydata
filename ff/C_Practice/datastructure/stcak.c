#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	struct student *link;

}Node;
int Top=-1;
Node *push(Node *);
Node *pop(Node *);
void display(Node *);
int main()
{
	Node *head=NULL;
	char ch;
	while(1)
	{
		printf("enter the choice\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case 'a':head=(Node *)push(head);
				 break;
			case  'r':head=(Node *)pop(head);
				  break;
			case  'd':display(head);
				  break;
			default: printf("i am in default\n");
				 break;
		}


	}


}
Node *push(Node *head)
{
	Node *new;
	Node *tmp=head;
	new=(Node *)malloc(sizeof(Node));
	printf("enter the new node\n");
	scanf("%d",&new->roll);
	if(Top==-1)
	{
		printf("stack is underflow fill the stack\n");
                head=new;
		new->link=NULL;
		
		Top=Top+1;
		return head;
	}
	else
	{
		tmp=head;
		while(tmp->link!=NULL)
		{
			tmp=tmp->link;
		}
		Top=Top+1;
		tmp->link=new;
		new->link=NULL;
	}
	return head;
}

void display(Node *head)
{
//	printf("%d top value in display is\n",Top);
	Node *tmp=head;
//	printf("data is 1st %d \n",tmp->roll);
	int max=0;
	if(Top!=-1)
	{
	while(max<Top)
	{
		    // printf("i am in  loop\n");
	            // printf(" and Top is %d  %d data is\n",Top,tmp->roll);

	     	    tmp=tmp->link;
		    max+=1;
	}
	printf(" and data is %d  %d Top is\n",tmp->roll,Top);
//	Top=Top-1;
	}
	else
	{
		printf("stack is underflow\n");

	}
	
}
Node * pop(Node * head)
{

 Node *tmp=head;
	int min=0;
 while(min<Top)
 {
	min+=1;
	tmp=tmp->link;
 }
	free(tmp);
	Top=Top-1;
	return head;
}
