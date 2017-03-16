Partition(A,p,r):
    x = A[r]
    i = p - 1
    for j =p to r-1:
        if A[j] <= x:
            i = i + 1
            exchage(A[i],A[j])
    exchage(A[i+1],A[r])
    return i+1

quicksort(A,p,r):
    if p < r:
        q = Partition(A,p,r)
        quicksort(A,p,q-1)
        quicksort(A,p,q-1)
