def solution(strArr):
    answer = []
    for strUnit in strArr:
        if(strUnit.count("ad") == 0): answer.append(strUnit);
    return answer