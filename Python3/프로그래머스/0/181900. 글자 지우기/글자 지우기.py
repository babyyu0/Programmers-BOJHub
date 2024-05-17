def solution(my_string, indices):
    answer = list(my_string)
    for indice in indices:
        answer[indice] = ""
    return ''.join(answer)