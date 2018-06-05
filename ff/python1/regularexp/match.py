#!/usr/bin/python
import re
str="hi how are you ho i am shaikh how ishaque i am fine "
obj=re.match(r'hi',str)
print obj.group()
obj1=re.search(r'i',str)
print obj1.group(0)
#print obj1.group(1)
print re.findall(r'ho',str)
obj1= re.sub(r"i", 'k', str) 
print obj1
