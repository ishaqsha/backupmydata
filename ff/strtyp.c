#include<stdio.h>
struct st
{
int num;
float f;
}v;
main()
{
int j = 0;
int i = 0;
v.f=10.5;
v.num=(int)v.f;
for(i = 31; i>=0;i--){
	j = (v.num >>i) & 0x01;
	printf("%d", j);
}
}