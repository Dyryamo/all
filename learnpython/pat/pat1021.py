#!/usr/bin/python3
a=int(input())
p=[0]*10
while a>0:
	g=a%10
	p[g]+=1
	a=a//10
	#print("a=%d g=%d"%(a,g))
i=0
while i<10:
	if p[i]!=0:
		print("%d:%d"%(i,p[i]))
	i+=1


