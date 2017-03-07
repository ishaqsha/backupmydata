#!/usr/bin/python
mylist=[10,20,30,40]
power=input("enter a power:")
def modify_list(myarglist,pow):
	if not ((pow<=5) and (pow>=1)) :
		pow=5
	ind=0
	while ind<len(myarglist):
		myarglist[ind]**=pow
		ind+=1
modify_list(mylist,power)
print "my list",mylist
