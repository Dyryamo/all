
a=input()
b=""
c=""
flag=True
for i in a:
	if i==' ':
		flag=False
		continue
	if flag==0:
		c+=i
	else :
		b+=i
#print(b)
#print(c)
b=int(b)
c=int(c)
print("%d %d"%(b//c,b%c))

