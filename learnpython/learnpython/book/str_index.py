import os
def extract_from_tag(tag,line):
	opener = "<"+tag+">"
	closer = "<"+tag+">"
	try:
		start=line.index(opener)+len(opener)
		end = line.index(opener,start)
		print(line[start:end])
		return line[start:end]
	except ValueError:
		return True;

f=open("qmx.html","r")
p=[]
while 1:
	line=f.readline()
	#ans=extract_from_tag("p",line)
	print(line)
#	if ans != False:
#		p.append(ans)
#	else:
#		break;
print(ans)
	
	
