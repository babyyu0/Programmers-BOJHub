def solution(n, m):
    answer = [1, n * m]
    
    #최대공약수
    ans1 = min(n, m)
    while n % ans1 != 0 or m % ans1 != 0:
        ans1 -= 1
    
    #최소공배수
    ans2 = max(n, m)
    while ans2 % n != 0 or ans2 % m != 0:
        ans2 += 1
    
    return [ans1, ans2]