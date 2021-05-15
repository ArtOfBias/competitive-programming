# 06 j1

a = int(input())
b = int(input())
c = int(input())
d = int(input())
t = 0
if a == 1:
    t += 461
elif a == 2:
    t += 431
elif a == 3:
    t += 420
else:
    pass

if b == 1:
    t += 100
elif b == 2:
    t += 57
elif b == 3:
    t += 70
else:
    pass

if c == 1:
    t += 130
elif c == 2:
    t += 160
elif c == 3:
    t += 118
else:
    pass

if d == 1:
    t += 167
elif d == 2:
    t += 266
elif d == 3:
    t += 75
else:
    pass

print(f'Your total Calorie count is {t}.')
