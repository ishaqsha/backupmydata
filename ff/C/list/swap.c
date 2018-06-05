#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int num;
	struct student *link;

}node;
node *add(node *);
void display(node *);
node *swap(node *);

int main()
{
	node *head=NULL;
	char ch;
//	printf("enter the choice\n");
//	scanf("%c",&ch);
	while(1)
	{
		        printf("enter the choice\n");
		        scanf(" %c",&ch);

		switch(ch)
		{
	
			case 'a':	head=(node *)add(head);
					printf("i am switch %d\n",head->num);
					break;
			case 'd':	display(head);
					
					printf("i am switch %d\n",head->num);
					break;
			case  's':	head=(node *)swap(head);
					break;
			default:	printf("i am in default");
					break;
	}
	}
	//head=(node *)swap(head);
	//display(head);

}

node *add(node *head)
{

	int i;
	node *tmp=head;
	node *new;
	
		new=malloc(sizeof(node));
		printf("enter the num\n");
		scanf(" %d",&new->num);
		if(head==NULL)
		{
	
			head=new;
			tmp=new;
			new->link=NULL;

			return head;
		}
		else
		{
			tmp=head;
			while(tmp->link!=NULL)
			{
				tmp=tmp->link;
			}
			tmp->link=new;
			new->link=NULL;
			//return head;
		}


			return head;
}
void display(node *head)
{

	node *tmp=head;
	while(tmp!=NULL)
	{
		printf("data is %d\n",tmp->num);
		tmp=tmp->link;
		
	}
}

node *swap(node *head)
{
	node *tmp=head;
	int data;
	while(tmp!=NULL)
	{
	
	 data=tmp->num;
	tmp->num=tmp->link->num;
	tmp->link->num=data;
	tmp=tmp->link->link;
	
	}
	return head;
}






