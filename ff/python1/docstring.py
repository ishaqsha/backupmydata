#!usr/bin/python
''' This file doing simple class example '''
class A:
	''' class is createrd'''
	def __init__(self,x,y):
		'''this is a constructor which will call at the time oc object creation'''
		self.x=x
		self.y=y
		

	def display(self):
		'''this is  display i m printing it'''
		print self.x,self.y




b=A(12,13)
b.display()
print(__doc__)
print(b.__doc__)
print(b.__init__.__doc__)
print(b.display.__doc__)
print 'at a time printing all'
print(help(b))


