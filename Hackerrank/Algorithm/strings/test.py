str1 = "hackerrank"
t = int(input())
while(t):
    count = 0
    str2 = input(" ")
    for i in str1:
        val = str2.find(i)
        if val>=0:
            str2 = str2[val+1:]
            count = count + 1
    if count == 9:
        print("YES")
    else:
        print("NO")
    t = t-1
