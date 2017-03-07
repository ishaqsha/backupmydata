def max(num):
	if(num==0 or(num &(num-1))==0):
		return -1
	pos1=0
	setbit=1
	for index1 in range(32):
		pos1=pos1+1
		if((num&setbit)==setbit):
			setbit=setbit<<1
			break
		setbit=setbit<<1
	max=0
	pos2=pos1
	for index in range(index1,32):
		pos2=pos2+1
		if((num&setbit)==setbit):
			if(max<(pos2-pos1-1)):
				max=pos2-pos1-1
			pos1=pos2
		setbit=setbit<<1
	return max
num=input("enter the num:")
max1=max(num)
print "max zeros",max1
