#include<stdio.h>
int main()
{

int a[5];
int *ptr=&a;
int *ptr1=a;
unsigned int k,k1;
k1=sizeof(a)/sizeof(a[0]);
printf("%d %d sizeof array is\n",k1,a[8]);
printf("%u %u %u %u\n",sizeof(ptr),sizeof(a),sizeof(ptr1),sizeof(k));


return 0;

}
