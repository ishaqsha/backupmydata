def bit_dif(num1,num2):
	count=0
	res=num1^num2
	while(res):
		if((res & 1)!=0):
			count=count+1
		res=res>>1
	return count
num1=input("enter the num1")
num2=input("enter the nume2");
diff=bit_dif(num1,num2)
print "diff is",diff
