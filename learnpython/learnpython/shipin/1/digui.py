def f(a):
	if a==1:
		return a
	else:
		return a*f(a-1)
print(f(5))
