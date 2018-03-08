:i#继承，重写，重写后如何调用父类函数
class Animal:
  	def __init__(self):
		print("我是几类")	
	def eat(self):
		print("---吃")
	def __del__(self):
		print("jiben del")
class dog(Animal) :
	def __init__(self):
		print("dog dog")
	def bark(self):
		print("汪汪")
	def __del__(self):
		print("dogdog del")
class xtq(dog):
	def __init__(self):
		print("xtq__init")
	def __del__(self):
		print("xtq__del")
	def fei(self):
		print("----飞")
	def eat(self):
		print("dakou____")
		#第1种
		#dog.bark(self)
		Animal.eat(self)
		#第2种
		super().eat()
class Animal:
    pass
class Animal:
    dfjis:nInstall
    
    sdfsdfsd
d
d...	
d = xtq()
d.bark()
d.eat()
d.fei()

