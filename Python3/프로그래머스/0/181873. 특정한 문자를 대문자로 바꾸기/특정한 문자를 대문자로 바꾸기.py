def solution(my_string, alp):
    return ''.join([c.upper() if alp == c else c for c in my_string])