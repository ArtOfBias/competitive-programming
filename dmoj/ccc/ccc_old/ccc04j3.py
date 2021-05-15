# 04 j3

a = int(input())
b = int(input())
ad = []
no = []
for number in range(a):
    ad.append(input())
for number in range(b):
    no.append(input())
for adj in ad:
    for nou in no:
        print(f'{adj} as {nou}')
