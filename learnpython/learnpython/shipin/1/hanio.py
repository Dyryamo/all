def hanio(a,b,c,circle):
	if circle==1:	
		print("%c->%c"%(a,c))
	else :
		hanio(a,c,b,circle-1)
		print("%c->%c"%(a,c))
		hanio(b,a,c,circle-1)

n=5
hanio('a','b','c',n)
