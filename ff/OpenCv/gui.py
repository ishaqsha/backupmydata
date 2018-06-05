#!/usr/bin/python
from Tkinter import *
import numpy as np
#from cv2 import *
import cv2
import os
root = Tk()
root.geometry("500x500")
var =1
def face_detect(imag):
	face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
	eye_cascade = cv2.CascadeClassifier('haarcascade_eye.xml')
	img = cv2.imread(imag)
	gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
 	faces = face_cascade.detectMultiScale(gray, 1.1, 5)
	for(x,y,w,h) in faces:
		img = cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
		roi_gray = gray[y:y+h, x:x+w]
		roi_color = img[y:y+h, x:x+w]
		eyes = eye_cascade.detectMultiScale(roi_gray)
		for (ex,ey,ew,eh) in eyes:
			cv2.rectangle(roi_color,(ex,ey),(ex+ew,ey+eh),(0,255,0),2)
	cv2.imwrite('filename.jpeg',img)
	cv2.imshow('img',img)
	cv2.waitKey(0)
	cv2.destroyAllWindows()
	
def local_browse():
	from tkFileDialog import askopenfilename
	Tk().withdraw()
	browse = askopenfilename()
	face_detect(browse)
def cam():
	print "camera call back"
	cam = cv2.VideoCapture(0) 
	s, img = cam.read()
	print s
	file1= cv2.imwrite("filename.jpg",img)
	print file1
	if s:
		face_detect('filename.jpg')
	    
local = Button(root,text="local",command=local_browse)
local.pack()
camera = Button(root,text="camera",command=cam)
camera.pack()
web = Button(root,text="database")
web.pack()
close = Button(root,text="close",command=root.destroy)
close.pack(side="bottom")
root.mainloop()
