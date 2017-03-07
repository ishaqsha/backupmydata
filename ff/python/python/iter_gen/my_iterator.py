#!/usr/bin/python


def ite(start,end,step = 1):

	lst = []
	
	while start < end:
		lst.append(start)
		start += step
	return lst   

def gen(n):
	val = 3
	while val < n:
		yield str(val+20)
		yield str(val+10)+'\n'
		val += 1
			

var=gen(10)
print 'typis',type(var)
for ele in var:
	print ele,
	
