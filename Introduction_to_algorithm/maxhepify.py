max heapify(A,i):
    l = left(i)
    r = right(i)
    if l < A.size() and A[l] > A[i]:
        largest = l
    else:
        largest = i
    if r < A.size() and A[r] > A[largest]:
        largest = r
    if largest != i:
        exchange(A[i],A[largest])
        maxheapify(A,largest)


BuildMaxHeap(A):
    for i = A.size()/2 to 1:
        maxheapify(A,i)

heapincrease-key(A,i,key):
    if key < A[i]:
        error "new key is smaller than current key"
    A[i] = key
    while i > 1 and A[parent] < A[i]:
        exchange A(i) with A[parent(i)
        i = parent(i)
