# 13 j2

s = input()
alpha = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'J', 'K', 'L', 'M', 'P', 'Q', 'R', 'T', 'U', 'V', 'W', 'Y']
x = 0
for a in alpha:
    if a in s:
        x += 1
    else:
        pass
if x >= 1:
    print('NO')
else:
    print('YES')
