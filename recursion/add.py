def add(n):
	if n == 1:
		return 1
	return n + add(n-1)


def multiply(a,b):
	if b == 0:
		return 0
	return a + multiply(a,b-1)

print(multiply(3,12))