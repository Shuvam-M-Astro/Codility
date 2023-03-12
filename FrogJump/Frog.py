# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")

def solution(X, Y, D):
    v = ((Y-X)//D)
    print(v)
    if (X+v*D)<Y:
        return v+1
    else:
        return v
    pass
