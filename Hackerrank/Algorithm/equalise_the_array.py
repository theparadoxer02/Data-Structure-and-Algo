n = int(input())
str_arr = input().split(' ')
arr1 = [int(num) for num in str_arr]
arr2 = []
arr3 = []
for i in arr1:
	if i not in arr2:
		arr2.append(i)
		count = arr1.count(i)
		arr3.append(count)
print(n-max(arr3))