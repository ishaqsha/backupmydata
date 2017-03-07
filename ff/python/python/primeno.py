#!/usr/bin/python
import math
num=input("enter the num")
n=math.sqrt(num)
n1=int(n)
i=0
for i in range(2,n1+1,1):
	if (num%i==0):
		break;
if (n==i):
	print "it is a prime not num ",num
else:
	print "not a prime no.",num

