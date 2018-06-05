#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int ,int);
void f1();
void cal(int,f1);

int main()
{
int a=10,b=5,result,i;
int (*fp[3])(int,int)={add,sub,mul};

for(i=0;i<3;i++)
{

result=(*fp[i])(a,b);
printf("%d result is\n",result);

}
cal(a,f1);
return 0;
}
int add(int a, int b)
{

return a+b;
}
int sub(int a, int b)
{

return a-b;
}

int mul(int a, int b)
{

return a*b;
}
void cal(int a,void (*f)())
{

printf("i am in cal\n");
(*f)(void);

}
void f1()
{

printf("i am in f1\n");

}
