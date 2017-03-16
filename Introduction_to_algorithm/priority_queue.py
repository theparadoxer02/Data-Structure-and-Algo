heap-extract-max(A):
    if heap.size < 1:
        error "heap underflow"
    max = A[1]
    A[1] = A[A.heap-size()
    A.heap-size() -= 1
    maxheapify(A,1)
    return max
