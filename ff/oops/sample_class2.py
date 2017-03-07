class point:
	X = 0
	Y = 0
	def __init__(self,n=0,z=0):
		print 'in init'
		self.x = n
		self.y = z
	def display(self):
		print 'x ===',self.x
		print 'y ===',self.y
	def __del__(self):
		self.display()
		class_name = self.__class__.__name__
		print 'CLASS WITH NAME ::: ',class_name,' ::: destroyed'
pt1 = point()
pt2 = pt1
pt3 = pt2
pt4 = point(10,20)
pt5 = point(10,20)
print id(pt1),id(pt2),id(pt3)
print id(pt4),id(pt5)

pt1 = 5
pt2 = 5
pt3 = 5


print '\nhello world\n'
'''
del pt1
print '2'
del pt2
print '3'
del pt3
print '4'
del pt4
print '5'
del pt5
val1 = 10
'''
