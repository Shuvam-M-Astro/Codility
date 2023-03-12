# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(A, K):
    B = [None]*len(A)

    for i in range(len(A)):
        B[(i+K)%len(A)] = A[i]

    return B


    pass
