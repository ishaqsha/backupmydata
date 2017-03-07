#!/usr/bin/python
starttime=[15,50,45]
endtime=[14,55,50]
def time_difference(time1,time2):
	diff=[]
	hrs=time2[0]-time1[0]
	mins=time2[1]-time1[1]
	secs=time2[2]-time1[2]
	if mins<0:
		hrs=hrs-1
		mins+=60
	if secs<0:
		mins-=1
		secs+=60
	diff.append(hrs)
	diff.append(mins)
	diff.append(secs)
	return diff
diff_time=time_difference(starttime,endtime)
print "time diff is",diff_time

