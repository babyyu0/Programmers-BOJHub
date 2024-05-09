def solution(num_list):
    s1, s2 = 1, 0
    for n in num_list:
        s1 *= n
        s2 += n
    return int(s1 < s2**2)