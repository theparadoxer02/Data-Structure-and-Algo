s = input()
str=s
n = int(input())
while(len(str)<n):
	str = str+s
str = str[0:n]
print(str.count('a'))