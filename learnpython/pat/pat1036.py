#!/usr/bin/python3
a=input()
a=a.split()
l=int(a[0])
h=int(int(a[0])/2+0.5)		
i=0
j=0
while i<h:
	
	if i==0 or i==h-1:
		while j<l-1:
			print(str(a[1]),end="")
			j+=1
		print(a[1])

	else:
		while j<l:
			if j==0:	
				print(str(a[1]),end="")
			elif j==l-1:
				print(str(a[1]))
			else :
				print(" ",end="")
			j+=1
	i+=1
	j=0

