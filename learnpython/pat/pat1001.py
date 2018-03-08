#!/usr/bin/python3
n=int(input())
cnt=0
while n!=1:
	if not n&1:#如果是偶数
		n=n//2
		cnt+=1
	else :
		n=(3*n+1)//2
		cnt+=1
print("%d"%cnt)
	
