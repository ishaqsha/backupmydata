#!/usr/bin/python
def func(n1=1,n2=100):
	count=0
	print "n1 value is", n1,n2
	list=[]
	for num3 in range(n1,n2+1):
		for j in range(2,num3+1):
			rem=num3%(j*j)
			if rem==0:
				count=count+1
				list.append(num3)
				break
	return list
num1=input("enter thr")
num2=input("enter th")
if num1<0 and num2<0 and num1<num2:
	list=func()
	print list
else:
	list=func(num1,num2)
	print list

