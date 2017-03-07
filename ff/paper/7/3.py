#!/usr/bin/python
import sys
list1=input("enter the list1:")
list2=input("enter the list2:")
if len(list1)!=len(list2):
	print "lenght of two list must be same"
	sys.exit(-1)
def complex_mul(list1,list2):
	comb=zip(list1,list2)
	res=1
	for ele1,ele2 in comb:
		complexnum=complex(ele1,ele2)
		res*=complexnum
	return res
result=complex_mul(list1,list2)
print 'result is',result
