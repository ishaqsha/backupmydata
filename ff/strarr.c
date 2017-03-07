#include<stdio.h>
struct student
{
int roll;
//float f;
char grade[4][4];
//char name[20];
};
void funct(struct student *);
main()
{
struct student v={{.grade[0]="ishaq",.grade[1]="shaikh",.grade[2]="aamer",.grade[3]="sadik"};
struct student v1[4];
v1[0]=v;
v1[1]=v;
v1[2]=v;
v1[3]=v;
v1[0].roll=10;
v1[1].roll=20;
v1[2].roll=30;
v1[3].roll=40;
funct(v1);
}
void funct(struct student v1[])
{
int index,index1;
for(index=0;index<4;index++)
{
printf("%d\n",v1[index].roll);
 for(index1=0;index1<4;index1++)
 {
  printf("%s\n",v1[index].grade[index1]);
 }
}
/*v=&v1;
char s1[20]="ishaque";
v->name=(char*)s1;
printf("%s\n",v->name);*/
}
