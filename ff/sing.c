#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int rollno;
	struct student *link;
}Node;

Node *add_last(Node *);
void display(Node *);
Node *deletelist(Node *);
void Quit();
Node *reverse(Node *);

void main(void)
{
	Node *head;
	int num;
	while(1)
	{
   		printf("\n***************\n"
			"enter the option\n"
			"1.add_last\n"
			"2.display\n"
			"3.quit\n"
			"4.deletelist\n"
			"5.reverse\n"
			"\n***************\n");
		__fpurge(stdin);
   		scanf("%d",&num);
		switch(num)
   		{
        		case 1:head=(Node *)add_last(head);
                		break;
        		case 2:display(head);
               			break;
        		case 3:Quit();
              			break;
        		case 4:head=(Node *)deletelist(head);
                      		break;
        		case 5:head=(Node *)reverse(head);
                     		break;
         	}
	}
}
Node *add_last(Node *head)
{
        Node *temp,*newdata;
        temp=head;
        newdata=(Node *)malloc(sizeof(Node));
        printf("enter the roll no\n");
        scanf("%d",&newdata->rollno);
       if(head==NULL)
       {
        //temp=temp->rollno;
        head=newdata;
        newdata->link=NULL;
        temp=head;
        temp->link=NULL;
       }
      else
      {
        while(temp)
       {
           if(temp->link==NULL)
            {
              temp->link=newdata;
              newdata->link=NULL;
              break;
             }
            else
              {
                 temp=temp->link;
               }
       }
      }
   return head;
}
void display(Node *head)
{
         Node *temp;
         temp=head;
	if (temp == NULL) {
		printf("no elements \n");
		return ;
	}
	 while(temp)
        {
          printf("%d\n",temp->rollno);
         temp=temp->link;
        }
}
Node *deletelist(Node *head)
{
          Node *temp=head;
          while(temp)
          {
             head=temp->link;
             free(temp);
             temp=temp->link;
          }
           return head;
}
void Quit()
{ 
        printf("i am exiting\n");
        exit(1);
}
Node *reverse(Node *head)
{
        Node *ptr=head,*pre=NULL,*next;
        while(ptr)
        {
            next=ptr->link;
            ptr->link=pre;
            pre=ptr;
            ptr=next;
        }
head=pre;
}
