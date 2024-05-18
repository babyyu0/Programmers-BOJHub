def solution(str_list):
    l_idx = 21 if str_list.count("l") == 0 else str_list.index("l")
    r_idx = 21 if str_list.count("r") == 0 else str_list.index("r")
    return str_list[:l_idx] if l_idx < r_idx else str_list[r_idx + 1 :]