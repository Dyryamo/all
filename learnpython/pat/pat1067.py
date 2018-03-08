class mysystem(object):
	def __init__(self):
		self.cnt=0
		self.a=""
		self.rightans=""
	def putin(self):
		self.rightans=input()
		self.rightans=self.rightans.split()
		self.cnt=int(self.rightans[1])
		self.rightans=self.rightans[0]
	def exit(self):
		while input():
			pass
	def solve(self):
		self.putin()
		while True:
			if not self.putyou():
				break
			if self.match():
				print("Welcome in")
				self.exit()
				break
			elif self.cnt>1:
				print("Wrong password: %s"%self.a)
				self.cnt-=1
			else :
				print("Account locked")
				self.exit()
				break
	def putyou(self):
		self.a=input()
		if self.a=='#':
			return False
		return True
	def match(self):
		if self.a==self.rightans:
			return True
		else :
			return False
a=mysystem()
a.solve()
