# 20 j2

p = int(input())
n = int(input())
r = int(input())
a = 0
t = 0
while t <= p:
    if r != 1:
        a += 1
        t = n*((r**a) - 1)/(r - 1)
    elif r == 1:
        a += 1
        t = a*n
    
print(a-1)
