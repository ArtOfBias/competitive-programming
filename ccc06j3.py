s1 = 'adgjmptw'
s2 = 'behknqux'
s3 = 'cfilorvy'
s4 = 'sz'

c2 = 'abc'
c3 = 'def'
c4 = 'ghi'
c5 = 'jkl'
c6 = 'mno'
c7 = 'pqrs'
c8 = 'tuv'
c9 = 'wxyz'

def keyClass(c):
    if c in c2:
        return 2
    elif c in c3:
        return 3
    elif c in c4:
        return 4
    elif c in c5:
        return 5
    elif c in c6:
        return 6
    elif c in c7:
        return 7
    elif c in c8:
        return 8
    elif c in c9:
        return 9
        

word = input()

while word != 'halt':
    sum = 0
    for i in range(len(word)):
        if i >= 1 and (keyClass(word[i]) == keyClass(word[i-1])):
            sum += 2
        
        if word[i] in s1:
            sum += 1
        if word[i] in s2:
            sum += 2
        if word[i] in s3:
            sum += 3
        if word[i] in s4:
            sum += 4
        
        i += 1

    print(sum)

    word = input()