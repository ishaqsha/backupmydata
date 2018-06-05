#!/usr/bin/python
#result
class base:
	global result
	def __init__(self,x,y):
		self.x=x
		self.y=y
	def add(self):
		result=self.x+self.y
		print result
	def display(self):
		print 'i am in dispaly'

class derived(base):
	def get(self):
		print 'i am in derived class'


b=derived(2,3)
b.add()
b.display()
b.get()
