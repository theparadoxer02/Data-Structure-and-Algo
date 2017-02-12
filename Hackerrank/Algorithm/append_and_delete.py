s = input()
t = input()
n = int(input())
for i in range(len(s)):
	if(s[i]==t[i] and i<len(t)):
		continue
	else:
		val = i + 1
		break

if s==t:
	if n>=2*len(s):
		print "YES"
	elif n%2 == 0:
		print "YES"
	else:
		print "NO"

elif(len(s)+len(t)-2*val):
	print "YES"