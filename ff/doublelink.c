#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
int roll;
struct student *link;
struct student *prev;
}Node;
Node *add(Node *);
void display(Node *);
int main()
{
           int num;
           Node *head;
           while(1)
           {
                   printf("engter the num choice\n");
                   scanf("%d",&num);
                    switch(num)
                    {

                             case 1:head=(Node *)add(head);
                                    break;
                             case 2:display(head);
                                     break;
                    }
            }
}
Node *add(Node *head)
{
           Node *temp=head,*newdata;
           Node *prev=head;
           newdata=(Node *)malloc(sizeof(Node));
           printf("enter the roll\n");
           scanf("%d",&newdata->roll);
           if(head==NULL)
           {
                 head=newdata;
                 newdata->link=NULL;
                 newdata->prev=NULL;
                 temp=head;
                 temp->link=NULL;
           }
           else
           {
		temp=head;
                 while(temp->link)
                 { 
                       temp=temp->link;
                       temp->prev=prev;
                        prev=temp;
                 }
                   temp->link=newdata;
                   newdata->prev=temp;
                   newdata->link=NULL;
          }
return head;
}
void display(Node *head)
{
                   Node *temp=head;
                  while(temp)
                  {
                   printf("%d\n",temp->roll);
                   printf("%p %p %p\n",temp,temp->prev,temp->link);
                   temp=temp->link;
                  }
}
/*Node *reverse(Node *head)
{
Node *temp1=head*/
