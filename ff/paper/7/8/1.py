def bit_diff(val1,val2):
	list1=bin(val1)
	list2=bin(val2)
	temp1=list1[2:]
	temp2=list2[2:]
	diff=len(temp1)-len(temp2)
	if diff>0:
		for i in range(diff):
			temp1='0'+temp1
	else:
		for i in range(diff):
			temp2='0'+temp2
	count=0
	for index in range(len(temp1)):
		if(temp1[index]!=temp2[index]):
			count=count+1
	print 'type of num',type(temp1),type(temp2)
	return count
num1=input("enter the num")
num2=input("enter the num2")
dif=bit_diff(num1,num2)
print "number iof bits",dif

