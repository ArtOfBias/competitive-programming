import sys

a = sys.stdin.readline().replace(" ","")
b = sys.stdin.readline().replace(" ","")

letters = "QWERTYUIOPASDFGHJKLZXCVBNM"

sum = 0

for char in letters:
    if a.count(char) == b.count(char):
        sum += 1

if sum == 26:
    print("Is an anagram.")
else:
    print("Is not an anagram.")