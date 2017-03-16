CountingSort(A,B,k):
    for i 0 to k:
        C[i] = 0
    for j = 1 to A.length:
        C[A[j]] = C[A[j]] + 1
    for i = 1 to k:
        C[i] = C[i] + C[i-1]
    for j = A.length to 1:
        B[C[A[j]]] = A[j]
        C[A[j]] = C[A[j]] - 1s
