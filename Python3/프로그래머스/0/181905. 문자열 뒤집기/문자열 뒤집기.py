def solution(my_string, s, e):
    string_list = list(my_string)
    string_list[s:e + 1] = string_list[s:e + 1][::-1]
    return ''.join(string_list)