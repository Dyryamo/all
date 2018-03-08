#此文件展示拆包，
def test(a,b,*args,**kwargs):
	print(a)
	print(b)
	print(args)
	print(kwargs)
A=(44,55,66)
B={"name":"laozhong","name":"xiaoding"}
test(1,2,3,*A,**B)
test(1,2,3,A,B)
