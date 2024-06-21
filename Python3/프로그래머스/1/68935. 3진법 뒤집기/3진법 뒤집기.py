def solution(n):
    str3 = str(n % 3)
    while n / 3 >= 1:
        n = int(n / 3)
        str3 = str(n % 3) + str3
    
    return sum(int(n) * (3 ** i) for i, n in enumerate(str3))