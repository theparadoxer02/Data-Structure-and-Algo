i,j,k = [int(x) for x in input().strip().split(' ')]
count = 0
for t in range(i,j+1):
	strg = str(t)
	rev = int(strg[::-1])
	if (((t-rev)//k) %2) == 0:
		count = count + 1

print(count)