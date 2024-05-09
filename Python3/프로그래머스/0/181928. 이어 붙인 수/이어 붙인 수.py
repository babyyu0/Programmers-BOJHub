def solution(num_list):
    s1, s2 = "",""
    
    for n in num_list:
        if n % 2: #짝수일 때
            s1 += str(n)
        else:
            s2 += str(n)
    
    return int(s1) + int(s2)