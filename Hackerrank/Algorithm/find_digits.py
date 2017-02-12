arr=[]
t = int(input())
while(t):
	count = 0
	n = int(input())
	str_n = str(n)
	arr = list(str_n)
	for i in arr:
		if(int(i)!=0):
			if ((n%int(i))==0):
				count = count + 1
	print(count)
	t = t-1

 #and (n%int(i)) == 0