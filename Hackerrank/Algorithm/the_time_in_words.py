d = 	{ 	1:'one',2:'two',3:'three',4:'four',5:'five',6:'six',7:'seven',8:'eight',
			9:'nine',10:'ten',11:'eleven',12:'twelve',13:'thirteen',14:'fourteen',
			15:'fifteen',16:'sixteen',17:'seventeen',18:'eighteen',19:'ninteen',
			20:'twenty',21:'twenty One',22:'twenty two',23:'twenty three',24:'twenty four',25:'twenty five',
			26:'twenty six',27:'twenty seven',28:'twenty eight',29:'twenty nine',30:'thirty' 
		}

hr=int(input())
min=int(input())

if min==0:
	print(d[hr] + " o' clock")
if min==15:
	print("quarter past "+ d[hr])
elif min<30:
	print(d[min] + " minutes past " + d[hr])
elif min==30:
	print("half past " + d[hr])
elif min==45:
	print("quarter to "+ d[hr+1])
elif min>30 and min<60:
	print(d[60-min]+" minutes to "+d[hr+1])

