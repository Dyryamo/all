#!/usr/bin/python3
def mergesort(origin,x,y):
	print("this is mergesort")
	if(y-x>1):
		mid=x+(y-x)//2
		p=x
		q=mid
		k=1
		mergesort(origin,x,mid)
		mergesort(origin,mid,y)
		T=[0]
		while p<mid or q<y:
			if ((origin[p]>origin[q]) and q<y) or p>mid:
				T.append(origin[q])
				q+=1
			else :
				T.append(origin[p])
				p+=1
		for i in range(x,y):
			origin[i]=int(T[k])
			print("%d %d"%(int(T[k]),k))
			k+=1
a=int(input())
origin=(input()).split()
midd=input().split()
a=[int(origin[i]) for i in range(len(origin)-1)]
midd=[int(midd[i]) for i in range(len(midd)-1)]
mergesort(origin,0,len(origin)-1)
print(origin)



