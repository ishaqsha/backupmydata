import cv2
import numpy as np
import sqlite3

faceDetect=cv2.CascadeClassifier('haarcascade_frontalface_default.xml');
cam=cv2.VideoCapture(0);
rec=cv2.face.createLBPHFaceRecognizer();
rec.load("recognizer/trainningData.yml")
font = cv2.FONT_HERSHEY_COMPLEX
fontScale=0.4
fontclor=(1,0,1)
(width, height) = (130, 100)
def getProfile(ids):
    conn=sqlite3.connect("FaceBase.db")
    cmd="SELECT * FROM People WHERE ID=\""+str(ids)+"\""
    cursor=conn.execute(cmd)
    profile=None
    for row in cursor:
        profile=row
    conn.close()
    return profile

while(True):
    ret,img=cam.read();
#    img = cv2.imread("baby1.jpeg",1)
    gray=cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    faces=faceDetect.detectMultiScale(gray,1.1,10,minSize=(30,30));
    for(x,y,w,h) in faces:
	cv2.rectangle(img,(x,y),(x+w,y+h),(255,0,0),2)
        face = gray[y:y + h, x:x + w]
        face_resize = cv2.resize(face, (width, height))
        ids = rec.predict(face_resize)
        profile=getProfile(ids)
        if(profile!=None):
            cv2.putText(img,"Name : "+str(profile[1]),(x,y+h+20),font,fontScale,(0,255,0));
            cv2.putText(img,"Age : "+str(profile[2]),(x,y+h+45),font,fontScale,(0,255,0));
            cv2.putText(img,"Gender : "+str(profile[3]),(x,y+h+70),font,fontScale,(0,255,0));
            cv2.putText(img,"Criminal Records : "+str(profile[4]),(x,y+h+95),font,fontScale,(0,0,255));
    cv2.imshow("Face",img);
    if(cv2.waitKey(1)==ord('q')):
        break;
cam.release()
cv2.destroyAllWindows()

