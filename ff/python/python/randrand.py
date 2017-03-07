#!/usr/bin/python
from random import randrange
list1=[]
list2=[4,1,2,8,0]
def fun(list1,list2):
	if list1 == list2:
		return 0
	elif list1 > list2:
		return -1
	else:
		return 1
	print ' called the fun'

for index in range(10):
	count=randrange(0,100)
        list1.append(count)
	#print list1
print 'list 1: ',list1
list1.extend(list2)
print list1
list1.sort(reverse = True)
print "list 2: ",list2
print "list1 after sort:\n",list1
list1.reverse()	
print 'list1 after reverse:\n',list1
#list1.remove(10)
#print "now list1 is",list1

