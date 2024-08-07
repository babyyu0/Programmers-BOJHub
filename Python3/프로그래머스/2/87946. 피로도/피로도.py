def solution(k, dungeons):
    answer = 0
    
    def dfs(k, count, visited):
        for i, (n, u) in enumerate(dungeons):
            if not visited[i] and n <= k and k - u >= 0:
                visited[i] = True
                dfs(k - u, count + 1, visited)
                visited[i] = False
            nonlocal answer
            answer = max(answer, count)
    dfs(k, 0, [0]  * len(dungeons))
    return answer