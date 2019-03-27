arr = [5,6,7,3,1,9,5,11192313213123,123,0]

def sort(pas):
	if pas == True:
		return arr 
	else:
		pas = True
		for i in range(len(arr)-1):
			if(arr[i]<arr[i+1]):
				(arr[i],arr[i+1])=(arr[i+1],arr[i])
				pas = False
		return sort(pas)
print(sort(False))