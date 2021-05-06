# 16 j1

a = input()
b = input()
c = input()
d = input()
e = input()
f = input()
s = (a + b + c + d + e + f)
s = s.lower()
count = s.count('w')
if count >= 5:
    print(1)
elif count >= 3:
    print(2)
elif count >= 1:
    print(3)
else:
    print(-1)

