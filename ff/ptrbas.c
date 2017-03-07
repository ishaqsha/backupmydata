#include<stdio.h>
main()
{
unsigned char num1 = 0x34;
unsigned char num2 = 0;
int num3 = 0x11223344;
unsigned char num4 = 0x12;
printf("&num1 %p\n",&num1);
/*printf("%d %d\n",*((char *)&num1),*((char *)(&num1+1)));
printf("%d %d\n ",*((char *)(&num1+2)),*((char *)(&num1+4)));
printf("\n");*/
//printf("%d %p\n",*((&num)+1));
printf("&num2 %p\n",&num2);
//printf("%d %p\n",*((&num2)+1));
printf("&num3 %p\n",&num3);
printf("&num4 %p\n",&num4);


printf("%p %x\n",(&num1+1),*(&num1+1));

printf("%p %x\n",((unsigned char *)(&num1)),*((unsigned char *)(&num1)));
printf("%p %x\n",((unsigned char *)(&num1)+1),*((unsigned char *)(&num1)+1));
printf("%p %x\n",((unsigned char *)(&num1)+2),*((unsigned char *)(&num1)+2));
printf("%p %x\n",((unsigned char *)(&num1)+3),*((unsigned char *)(&num1)+3));

}

