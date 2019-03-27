str = 'or kya hori mitronn'
lent = len(str)
def reverse(str,count):
	if count == lent-1:
		return str
	else:
		return reverse(str[1:],count+1) + str[0]
print(reverse(str,0))

