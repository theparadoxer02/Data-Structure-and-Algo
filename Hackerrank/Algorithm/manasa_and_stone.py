def manasa( n, a, b ):
    s = []
    if a == b:
        return [a * ( n -1 )]

    for i in range(0, n):
        s.append(i*a+(n-i-1)*b)

    s.sort()
    return s

t = int(input())

while(t):
	n = int(input())
	a = int(input())
	b = int(input())
	for i in manasa(n,a,b):
		print(i,end=" ")
	print()
	t = t -1