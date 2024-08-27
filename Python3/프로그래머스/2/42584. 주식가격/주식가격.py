def solution(prices):
    N = len(prices)
    answer = [i for i in range(N - 1, -1, -1)]
    stack = []
    
    time = 0
    for i, p in enumerate(prices):
        while stack and p < stack[-1][1]:
            # print("del", stack[-1], "in time", i - stack[-1][0])
            answer[stack[-1][0]] = i - stack[-1][0]
            del stack[-1]
        
        stack.append([i, p])
    
    return answer