def second_largest(temp):
    count = 0
    m1 = m2 = float('-inf')
    for x in temp:
        count += 1
        if x > m2:
            if x >= m1:
                m1, m2 = x, m1            
            else:
                m2 = x
    return m2 if count >= 2 else None





n=int(input())
str_arr = input().split(' ')
arr = [int(num) for num in str_arr]
main=[]
for i in range(n):
	temp = []
	temp2 = []
	for j in range(i,n):
		temp.append(arr[j])
		maximum = max(temp)
		second_max = second_largest(temp)
		temp2.append(max)
		temp2.append(second_max)
		print(temp2)
		# if val not in max:
		# 	max.append(val)
