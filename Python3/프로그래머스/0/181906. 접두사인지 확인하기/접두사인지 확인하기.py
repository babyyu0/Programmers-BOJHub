def solution(my_string, is_prefix):
    answer = 0
    return int(my_string[:len(is_prefix)] == is_prefix)