def solution(num_list):
    list_len = len(num_list)
    num_list += [num_list[list_len - 1] * 2 if num_list[list_len - 1] <= num_list[list_len - 2] else num_list[list_len - 1] - num_list[list_len - 2]]
    return num_list