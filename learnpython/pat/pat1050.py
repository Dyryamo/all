import math
def getmn(a):
	n = 0
	m = 0
	minx = 1000050
	sqr=int(math.sqrt(a))
	for i in range(1,sqr):
		for j in range(1,i):
			if(i*j==a and minx<i-j  ):
				m=i
				n=j
				minx=i-j

	return [m,n]
					
a=int(input())
list=input()
list=list.split()
m=getmn(a)
p=[]
for i in range(0,m[0]-1):
	p.append([])
	for j in range(0,m[1]-1):
		p[i].extend(0)


for i in range(0,m[0]-1):
		print(p[i])
	

	
