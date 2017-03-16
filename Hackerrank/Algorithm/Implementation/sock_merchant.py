n = int(input())
str_arr = raw_input().split(' ')
arr = [int(num) for num in str_arr]
count = 0
list  =[]
length = len(arr)
sum=0
for i in arr:
	if i not in list:
		count = 0
		for t in range(length):
			if i==arr[t]:
				count = count + 1
		list.append(i)
		sum = sum + count/2
print sum