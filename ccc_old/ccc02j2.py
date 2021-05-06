# 02 j2

txt = ''
while txt != 'quit!':
    txt = input()
    x = txt.endswith('or')
    lis = txt.rsplit('o',1)
    if x == True and len(lis[0]) > 3:
        print(f'{lis[0]}ou{lis[1]}')
    else:
        if txt == 'quit!':
            pass
        else:
            print(txt)

