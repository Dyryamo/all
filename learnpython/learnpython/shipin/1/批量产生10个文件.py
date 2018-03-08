import os
a = 1
while a < 10 :
	f=open("zjwtest%d"%a,"w")
	f.write("%d"%a)
	f.close()
	a=a+1

