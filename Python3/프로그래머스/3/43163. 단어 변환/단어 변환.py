from collections import deque

def solution(begin, target, words):
    if target not in words:
        return 0
    
    q, visited = deque(), set()
    q.append([0, begin])
    
    total, word = 0, None
    count = 0
    while q:
        total, word = q.popleft()
        for w in words:
            if w not in visited and sum(int(i != j) for i, j in zip(word, w)) == 1:
                if w == target:
                    return total + 1
                visited.add(w)
                q.append([total + 1, w])
    
    return 0