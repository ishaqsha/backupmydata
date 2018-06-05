#include<stdio.h>
//register int ia;
void f(int a);
int main()
{

f(5);
//printf("i asm in main %d\n",a);

}

void f(int a)
{


printf("i asm in main %d\n",a);

}
