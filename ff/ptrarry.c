#include<stdio.h>
main()
{
	int a1[3]={1,2,3},i;
	int a2[3]={4,5,6};
	int a3[3]={7,8,9};
	int a4[3]={10,11,12};
	int (*ptr)[3];
	ptr = &a1;
	printf("&a1 %p\n",&a1);
	printf("\n\na1 %p\n",a1);
	printf("a1+1 %p\n",a1+1);
	printf("a1+2 %p\n",a1+2);
	printf("a1+3 %p\n\n",a1+3);
	printf("\n\na2 %p\n",a2);
	printf("a2+1 %p\n",a2+1);
	printf("a2+2 %p\n",a2+2);
	printf("a2+3 %p\n\n",a2+3);
	printf("\n\na3 %p\n",a3);
	printf("a3+1 %p\n",a3+1);
	printf("a3+2 %p\n",a3+2);
	printf("a3+3 %p\n\n",a3+3);
	for ( i = 0 ; i < 3 ; i++) {
		printf("(ptr+%d) %p (ptr+%d)+1 %p\n",i,(ptr+i),i,(ptr+i)+1);
		printf("*(ptr+%d) %p *(ptr+%d)+1 %p\n",i,*(ptr+i),i,*(ptr+i)+1);

	}
}
