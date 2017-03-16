st=[]
a, b = map(int, input().split())
str_arr = input().split(' ')
arr1 = [int(num) for num in str_arr]
str_arr = input().split(' ')
arr2 = [int(num) for num in str_arr]
for r in arr2:
	for i in range(0,r+1):
		if i%r == 0:
			st.append(r)
			st.app(r/i)

for t in st:
	print(t)