flag = 0
count = 0
a= int(input())
b = int(input())
for i in range(a,b+1):
	if i>1 and i<9:
		flag = 1
		continue
	if i==1:
		print(1,end=" ")
		count = count + 1
		continue
	if i == 9:
		flag = 1
		print(9,end=" ")
		continue
	d = len(str(i))
	val = i * i
	t = int(str(val)[:-d:])+int(str(val)[-d::])
	if (t == i):
		flag = 1
		print(i,end=" ")
if flag == 0:
	print("INVALID RANGE")

