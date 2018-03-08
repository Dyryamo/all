class test(object):
	"""docstring for ClassName"""
	def __init__(self):
		self.__number =0 
	def getnumber(self):
		print("*"*50)
		print("this is getnumber")
		return self.__number
	def setnumber(self,x):
		print("*"*50)
		print("this is setnumber")
		self.__number = x	
		return True
	number= property(getnumber,setnumber)
a= test()
a.number =10
print(a.number)
