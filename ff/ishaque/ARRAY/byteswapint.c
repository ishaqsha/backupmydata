#include <stdio.h>
/* function : swapTwoNibbles, to swap two nibbles of a given byte.*/
unsigned char swapTwoNibbles(int  n)
{
    int num,i=0;
   while(i<32)
{
  
    n=(( ( n & ( 0x0F<<i))<<4) |( ((n & (0xF0<<i)))>>4 ));
    printf("%d",n);
	i=i+8;
}
    return n;
}
 
int main()
{
    int number;
    int revNumber;
    printf("Enter an integer number (One byte number):");
    scanf("%d",&number);
 
    revNumber=swapTwoNibbles(number);
    printf("\nEntered Number was : %d \nNumber after swapping nibbles : %d",number,revNumber);
 
    return 0;
}
