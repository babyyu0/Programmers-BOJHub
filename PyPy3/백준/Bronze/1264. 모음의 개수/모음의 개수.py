str = ""
while True:
    str = input().lower()
    if str == "#": break
    print(str.count('a') + str.count('e') + str.count('i') + str.count('o') +str.count('u'))