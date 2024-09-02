def solution(X, Y):
    answer = ''
    X_cnt = [X.count(str(i)) for i in range(10)]
    Y_cnt = [Y.count(str(i)) for i in range(10)]
    
    for i in range(10):
        answer = str(i) * min(X_cnt[i],Y_cnt[i]) + answer
    
    if not answer:
        return "-1"
    if answer[0] == '0':
        return "0"
    return answer