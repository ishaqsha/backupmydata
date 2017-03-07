#include<stdio.h> 
struct student
{
int num;

//int num1;
//int num2;
//char name[4][4];
//float f;i
//float f;
char name[3][4];
float f;
//int  num1;
  struct date
  {
    int date;
     int month;
     char nam1[2][6];
  }v1[3];
}v2[3]={[0]{10,{"sha","lk","ah"},20.4,11,12,{"shaik","saj"}},[1]{11,{"sha","lk","ah"},30.4,11,14,{"akj","sxd"}},[2]{14,{"sha","lk","ah"},20.4,13,343,{"kak","wed"}};
int main()
{
  //union student v; //={.name[0]="hii",.name[1]="bye",.name[2]="ddj"};
//struct student var={{"isaq"}};
//struct student v[3]={[1]{.name[0]="ddd"}};
//struct student v2[3]={[0]{"sha","lk","ah",5,10},[1]{"sha","lk","ah",15,20},[2]{"sha","lk","ah",25,30}};
printf("%d %d\n",v2[0].v1.date,v2[0].v1.month);
printf("%s\n",v2[0].v1.nam1[0]);
/*int index,index1;
for(index=0;index<3;index++)
{
 for(index1=0;index1<3;index1++)
 {
 printf("%s\n",v[index].name[index1]);
 }
}
//v[0].num=10;
//v.num1=20;
//v.num2=40;
//printf("sizeof union %lu\n",sizeof(v));
//printf("%d\n",v[0].num);
/*printf("enter the num name and float value\n");
scanf("%d%s%f",&v.num,v.name,&v.f);
//printf("%d %s %f\n",v.num,v.name,v.f);
printf("%d addres of num %p\n",v.num,&v.num);
printf("enter the name\n");
scanf("%s",v.name);
//printf("%s address of name %p\n",v.name,v.name);
printf("enter the float value\n");
scanf("%f",&v.f);
printf("%f float and name printing %s\n",v.f,v.name);*/
}
