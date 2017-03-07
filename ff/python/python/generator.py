#!/usr/bin/python
def reverse(data):
	for index in range(len(data)-1,-1,-1):
		yield data[index]
		print 'i am shaikh'
		print 'i am ishaq'
for char in reverse('golf'):
	print(char)                                                                            
