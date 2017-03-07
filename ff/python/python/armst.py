#!/usr/bin/python
num=input("enter the num")
num1=num
num2=num
count=0
sum=0
while num1>0:
	#rem=num1%10
	num1=num1/10
	count = count + 1
	if num1==0:
		while num>0:
        		rem = num%10
        		#num2 = num2/10
 			sum=sum+rem**count

			if sum==num2:
				print "it is armstrong no",sum
#if num == sum:
#	print "no is armstromg"
			else:
				print "print not a armstrong no.",num2
	
	
