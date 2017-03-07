
#include<stdio.h>


int * f2(int a)
{
	int *p2;
	int d = 80;
        p2=&d;
	//d = d + 20;
	return p2;
}



int * f(int a)
{
   int b = a;
   int *p = &b;
   *p = *p+1;
   //int c = 20;
   //int d = 80;
   printf("%p %d\n",p,*p);
   return p;
}
main()
{
 int a=10;
 int *p,*p2;
  p=f(a);
*p=*p+1;
  printf("%p %d\n",p,*p);
  p2=f2(15);
  printf("%p %d\n",p2,*p2);
  p2= f2(30);
  printf("%p %d\n",p2,*p2);
  p2=f2(20);
  printf("%p %d\n",p2,*p2);
  p=f(10);
  printf("printing p ptr :%p %d\n",p,*p);


}
