N = int(input()) - 1
s = input()
coms = ""

for i in range(N):
    coms = input()
    s = ''.join([c if c == comc else "?" for c, comc in zip(s, coms)])
print(s)