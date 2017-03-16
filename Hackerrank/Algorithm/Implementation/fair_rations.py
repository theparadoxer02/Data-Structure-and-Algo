N = int(input())
B = [int(B_temp) for B_temp in input().strip().split(' ')]
count = 0
p1 = p2 = -1
for i in range(N):
	if B[i]%2 != 0:
		if p1<0 and p2<0:
			p1 = i
		else: 
			p2 = i
			count = count+ (p2-p1)*2
			p2 = p1 = -1

if p1>=0 and p2<0:
	print("NO")
else:
	print(count)