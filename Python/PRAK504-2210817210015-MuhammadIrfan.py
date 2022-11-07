def reverse(reverse):
    r = 0
    while(reverse!=0):
        r = r * 10
        r = r + reverse % 10
        reverse //= 10
    return r
A, B = input().split()
A = reverse(int(A))
B = reverse(int(B))
C = A + B
print(reverse(C))