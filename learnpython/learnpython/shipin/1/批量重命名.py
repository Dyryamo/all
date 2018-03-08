import os
a=1
#print(type(os.getcwd()))
print("now you are in %s"%os.getcwd())

alls = os.listdir(os.getcwd())
j=1
for i in alls :
	if i[0]!='d':
			continue
	print("you are modify the file name %s"%i)
	os.rename(i,"sdyr%d"%j)
	j+=1


