t = int(input())
count1 = 0
count2 = 0
while(t):
    string = input()
    val1 = string.count("19")
    count1 = count1 + val1
    val2 = string.count("21")
    count2 = count2 + val2
    t = t - 1

if count1 >= count2 and count1 > 0:
    print("Date")
else:
    print("No Date")
