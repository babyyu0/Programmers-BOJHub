def solution(a, b, c):
    s1, s2, s3 =  (a + b + c), (pow(a, 2) + pow(b, 2) + pow(c, 2)) , (pow(a, 3) + pow(b, 3) + pow(c, 3))
    
    if a == b and b == c:
        return s1 * s2 * s3
    elif a == b or b == c or a == c:
        return s1 * s2
    return s1