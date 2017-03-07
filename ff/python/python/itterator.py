#!/usr/bin/python
#list=[1,2,3,"shaikh",15.7]
list="shaikh"
itr=iter(list)
len=len(list)
i=0
while(i<len):
	t1=itr.next()
	print t1
	i=i+1
else:
	print "string is completed"




