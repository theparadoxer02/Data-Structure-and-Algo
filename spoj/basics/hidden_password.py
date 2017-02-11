t = int(raw_input())
strings = []

while(t):
	n = int(raw_input())
	while(n):
		s = raw_input()
		strings.append(s)
		n = n-1
	string = raw_input()
	for j in strings:
		t = 0
		for k in j:
			ascii = ord(k)
			binary = bin(ascii)[2:].zfill(8)
			t = t+1
		print binary[t]
	t = t -1