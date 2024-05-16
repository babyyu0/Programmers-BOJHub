def solution(intStrs, k, s, l):
    answer = []
    stoi = 1
    for intStr in intStrs:
        stoi = int(intStr[s:s + l])
        if stoi > k:
            answer.append(stoi)
    return answer