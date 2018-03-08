import time
import os
def tds():
	ret=os.fork()
	print(type(ret))
	if ret == 0:
		while True:
			print("-"*15+"1"+"-"*15)
		time.sleep(100)
	else:
		while True:
			print("-"*15+"2"+"-"*15)
		time.sleep(100)
while True:
	tds()
