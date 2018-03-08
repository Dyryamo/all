#1:
#这是一个将函数里所有传进来的参数相加的函数
def test(a,b,*args):#末尾参数前加一个×号
	print(a)
	print(b)
	print(*args)
	sum=a+b
	for i in args:
		sum+=i
	print(sum)
#	args是一个元组
#元组若是元素为一个，后面要跟一个逗号，否则不为元组

#2:
def test(a,b,*args,**kwargs):#kwargs 用字典存带名字的多余参数
	print(a)
	print(b)
	print(args)
	print(kwargs)
test(1,2,3,5,5,66,4,9,8,2,5,58,5,5)
#test(b=1,a=2,3,5,5,66,4,9,8,2,5,58,5,5)
test(1,2,3,4,5,task=99,done=88)
#test(a=1,b=2,3,4,5,task=99,done=88)用了不定长的参数，能再用指定参数的方式传参

