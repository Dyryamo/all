# 测试私有方法

class  Dog:
	def __send_msg(self):
		print("__send_msg")
	def send_mgs(self):
		self.__send_msg()

dog = Dog()
dog.send_mgs()

