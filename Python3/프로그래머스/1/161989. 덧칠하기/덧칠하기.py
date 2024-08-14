def solution(n, m, section):
    visited = [False] * len(section)
    
    answer = 0
    
    for i, (v, s) in enumerate(zip(visited, section)):
        if not v:
            answer += 1
            while i < len(section) and section[i] < s + m:
                visited[i] = True
                i += 1
            # print("section:", section)
            # print("visited:", visited)
            
    
    return answer