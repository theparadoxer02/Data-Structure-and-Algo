n,m = map(int, input().split())
str_arr = input().split(' ')
arr1 = [int(num) for num in str_arr]
arr1.sort()
max = 0
for i in range(m-1):
	val = int((arr1[i+1] - arr1[i])/2)
	if ( val > max):
		max = val

if 0 not in arr1:
	val = arr1[0]
	if val>max:
		max = val

if (n-1) not in arr1:
	val = n-1- arr1[m-1]
	if val>max:
		max=val

print(max)