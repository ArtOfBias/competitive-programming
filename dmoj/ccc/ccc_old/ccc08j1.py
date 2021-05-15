# 08 j1

w = float(input())
h = float(input())
b = w/(h**2)
if b > 25:
    print('Overweight')
elif b >= 18.5:
    print('Normal weight')
else:
    print('Underweight')
