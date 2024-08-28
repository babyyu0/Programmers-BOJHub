def solution(s, skip, index):
    answer, cur_idx = '', 0
    skip = [ord(sk) - 97 for sk in skip]
    s = [ord(c) - 97 for c in s]
    
    cur_idx = 0
    for c in s:
        cur_idx = 0
        while cur_idx < index:
            c = (c + 1) % 26
            cur_idx += int(c not in skip)
        answer += chr(c + 97) 
    
    return answer