str = input()
for c in str:
    if 'A' <= c and c <= 'Z':
        print(chr(ord(c) + 32), end='')
    else:
        print(chr(ord(c) - 32), end='')