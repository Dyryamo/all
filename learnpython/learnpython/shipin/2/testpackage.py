#这个程序测试import
def test():
	print("hello world")
def dyr():
	if __name__=='__main__':
		print("dyr")
	else :
		print("zhong")
def zh():
	print("zhong")
def swap(a,b):
	a^=b
	b^=a
	a^=b
def ap(a):
	a.append(12)

dyr()
a=100
b=200
c=[1,0,2,1,4,45]
print("%d  %d"%(a,b))
swap(a,b)
print("%d  %d"%(a,b))
print(c)
ap(c)
print(c)



print(__name__)
