#include<stdio.h>
void f1();
void func(int , void (*fp)());
int main()
{

void (*fp)();
//fp=f1;
func(5,f1);
return 0;
}

void func(int a, void (*fp)())
{


printf("i am inn func\n");
(*fp)();
}
void f1()
{

printf("i am in f1\n");

}

