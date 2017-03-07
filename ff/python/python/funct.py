#!/usr/bin/python
def func(list1):
	newlist1=list1
	#newlist1=list1[:]
	#print "newlist1 is",newlist1#'newlist2 is',newlist2
        print "before changing newlist1 id is",id(newlist1)#,'newlist2 id of newlist2',id(newlist2)
        newlist1=[5,6,78,3,4]
        print "new list1 is",newlist1,'newlistid is',id(newlist1)
        #newlist2=[5,3,5,'dfs']
	#print "new list1 is",newlist2,'newlistid is',id(newlist2)
	newlist1.append(9)
	#newlist1.pop(3)
	#newlist2.append(8)
        #print "newlist1 is",newlist1

list1=[1,2,3,4,"shgaj"]
print "list before function call is",list1,'list1 id is',id(list1)
func(list1)
print "after function calllist1 is",list1
