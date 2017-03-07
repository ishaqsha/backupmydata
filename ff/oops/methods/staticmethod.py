#!/usr/bin/python
class textfile:
	_ntfiles = 0# count of number of textfile objects
	@staticmethod
	def totfiles1():
		print 'no.of text files (way1) is' , textfile.ntfiles
		return 

	def totfiles():
		print 'number of textfiles (way2) are',textfile.ntfiles
		return

	totfiles2 = staticmethod(totfiles)

	def __init__(self,fname):
		textfile.ntfiles+=1
		self.name=fname#name
		self.fh = open(fname)#handle for the file
		self.lines = self.fh.readlines()
		self.nlines = len(self.lines)#number of lines
		self.nwords = 0#number of words
		self.wordcount()
	def wordcount(self):
		"finds the number of words in the file"
		for l in self.lines:
			w = l.split()
			self.nwords+=len(w)	
	def grep(self,target):
		"prints out all lines containing target"
		for i in self.lines:
			if i.find(target)>=0:
				print i
file1 = textfile('file1.txt')
file2 = textfile('file2.txt')
print "The number of textfles open",file1.ntfiles
print "Some info about them(name,lines,words):"
for myfile in [file1,file2]:
	print myfile.name,myfile.nlines,myfile.nwords
file1.grep('example')	

print "'''''",textfile.__ntfiles
textfile.totfiles1()
textfile.totfiles2()
