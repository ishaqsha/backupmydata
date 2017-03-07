def max_prod(len1,*list1):
	print "list 1 elem",list1[0]
	list2=list(list1)
	print "len of string",len(list2)
	i=max(list2)
	list2.remove(i)
	j=max(list2)
	prod=i*j
	return prod
res=max_prod(5,1,100,42,4,23)
print "the result is",res
	
