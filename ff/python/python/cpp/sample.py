#!/usr/bin/python
class student:
	#statici=0

	#def __init__(self,name,age):

	#	self.name2=name
	#	self.age8=age

	def display(self):
		#print "name and age of student is",self.name2,self.age8
               # print "static value is",student.statici
        
        @staticmethod
        def func():
		#i=0
		#statici=0
		student.statici=student.statici+1
		#sstaici++
		#print "typeof i is",type(i)
		print "latest value of i is",statici
	staticmethod(func)
	#print "now i is",i


#obj=student("ishaq",24)
obj=student()
#obj.display()
student.func()

student.func()
student.func()
student.func()
obj.display()
