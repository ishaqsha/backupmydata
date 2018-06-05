#include<stdio.h>
union A
{

	int a;
	//char ch[4];


}v;
int main()i
{
	v.a=1;
   // int	a=1;
	int i,j,temp;
	char *p;
	p=(char *)&v.a;
	//p=(char*)&a;
printf("before converting\n");
for(i=0;i<4;i++)
{

printf("%d",p[i]);

}
	printf("\n");
	if(*p==1)
	{
		printf("big  endian it follow");
		printf("\n");
		for(i=0,j=3;i<j;i++,j--)
		{
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
		}
	}
	printf("conerting little to big endian\n");
	for(i=0;i<4;i++)
		printf("%d",p[i]);
}
