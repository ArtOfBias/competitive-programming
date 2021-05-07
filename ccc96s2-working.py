# 96 s2

numberCount = int(input())

for i in range(numberCount):
    currentNumber = input()
    originalNumber = currentNumber
    while len(currentNumber) > 2:
        print(currentNumber)
        residue = int(currentNumber[-1])
        last2 = int(currentNumber[-3:-1])
        ans = last2 - residue
        if len(str(ans)) == 1:
            strans = f"0{ans}"
        else:
            strans = str(ans)
        currentNumber = currentNumber[:-3] + strans
    
    if int(currentNumber) % 11 == 0:
        print(f"The number {originalNumber} is divisible by 11.")
    else:
        print(f"The number {originalNumber} is not divisible by 11.")
