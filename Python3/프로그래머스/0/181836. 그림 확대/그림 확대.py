def solution(picture, k):
    answer = []
    for pic in picture:
            answer += [''.join([n * k for n in pic])] * k
    return answer