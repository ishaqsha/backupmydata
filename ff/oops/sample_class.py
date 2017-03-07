#!/usr/bin/python

class Employee:
	'COMMON BASE CLASS FOR ALL EMPLOYESS'
	empcount = 0 # class variable
	def __init__(self,name,salary):
		self.name = name
		self.salary = salary
		Employee.empcount += 1

	def displayCount(self):
		print "Total Employee %d"%(Employee.empcount)

	def displayEmployee(self):
		print "Name:",self.name,"Salary:",self.salary


emp1 = Employee('daya',240000)
emp2 = Employee('sai',240000)



emp1.displayCount()
emp2.displayCount()


emp1.displayEmployee()
emp2.displayEmployee()

print "employee name = ", emp1.name # access class attributes
del emp1.name # delete attribute

print Employee.__name__
print Employee.__doc__
print Employee.__module__
print Employee.__bases__
print Employee.__dict__


