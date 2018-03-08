#!/usr/bin/python3
a=input()
se={"0":"ling","1":"yi","2":"er","3":"san","4":"si","5":"wu","6":"liu","7":"qi","8":"ba","9":"jiu"}
sum=0
for i in a:
	sum+=int(i)
sum=str(sum)
cnt=0
for i in sum:
	if cnt!=len(sum)-1:
		print(se[i],end=" ")
	else :
		print(se[i],end="")
	cnt+=1
