arr = []
c=[]
n,m = map(int, input().split())
for i in range(n):
	val = input()
	arr.append(val)

for i in range(n-1):
	t=0
	for j in range(i+1,n):
		for k in range(m):
			c[t++][k] = str(int(arr[i][k]*int(arr[j][k])))




