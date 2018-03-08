#!usr/bin/python
def test(a,b,c,d=0):#缺省参数后不能再有非缺省的参数
	print(a)
	print(b)
	print(c)
	print(d)
test(10,20,30,40)
test(10,20,30)
test(b=10,c=20,d=30,a=40)#命名参数中的名字必须是函数中形参的名字

