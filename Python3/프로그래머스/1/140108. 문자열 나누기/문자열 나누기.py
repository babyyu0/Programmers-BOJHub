def solution(s):
    answer = 0
    cnt, left, right = 1, 0, 1
    
    while right < len(s):
        cnt, x = 1, s[left]
        while right < len(s) and cnt != 0:
            cnt += 1 if s[right] == x else -1
            right += 1

        answer += 1
        left, right = right, right + 1
    
    return answer + int(s[left:right] != '')