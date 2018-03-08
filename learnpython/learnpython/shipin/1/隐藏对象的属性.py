class dog:
	def __init__(self):
		self.age = 0
		self.name = ""
	def set_age(self,age):
		if(age>=0):
			self.age = age
		else :
			print("illegal")
	def get_age(self):
		return self.age

xiaobai = dog()
print(xiaobai.set_age(10))
print(xiaobai.get_age())


