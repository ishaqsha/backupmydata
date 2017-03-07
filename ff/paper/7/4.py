#!/usr/bin/python
n=input('enter no. of digit to remove')
string=input('enter string')
s=len(string)
count=0
str1=''
prevind=0
lst = list(string)
while (count < (s-n)):
	lst = lst[prevind:]
	if prevind <5 and prevind < len( lst) :
		ind=lst.index(min(lst))
		str1+=lst[ind]
		prevind=ind+1
	count+=1
if str1:
	print 'value is',int(str1)
else:
	print 'not done'
