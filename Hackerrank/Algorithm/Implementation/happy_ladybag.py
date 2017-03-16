g = int(input())
while(g):
	flag = 0
	n = int(input())
	str = input()
	for i in str:
		if i == '_':
			continue
		ct = str.count(i)
		if ct<=1 :
			flag = 1
			break
		if '_' not in str:
			for j in range(1,n-1):
				if (str[j] != str[j+1]) and (str[j] != str[j-1]):
					flag = 1

	if flag == 1:
		print("NO")
	else:
		print("YES")
	g = g - 1