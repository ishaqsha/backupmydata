#!/usr/bin/python
num=4567
sum=0
while(num>0):
	rem=num%10
	sum+=rem
	num=num/10
print "sum of digit is",sum
