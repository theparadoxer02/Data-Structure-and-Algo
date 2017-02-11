from math import ceil
num_of_chapters,questions = map(int,input().split())
chapters = list(map(int,input().split()))
book = []
count = 0
for i in range(len(chapters)):
    for j in range(ceil(chapters[i]/questions)):
        book.append([j*questions + k for k in range(questions) if (j*questions + k) < chapters[i]])
for i in range(len(book)):
    if i in book[i]:
        count+=1
print(count)