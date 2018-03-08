#这个程序展示变量的私有化
class Test(object):
 	__num=101
	def __init__(self):
		self.__num = 200
	def printf(self):
		print(self.__num)

t=Test()
t.__num=300;
print(t.__num)
t.printf()

