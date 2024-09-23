def solution(ingredient):
    answer = 0
    stack, order = [], [1, 2, 3, 1]
    
    for ing in ingredient:
        if stack and order[(stack[-1] + 1) % 4] == ing:
            stack.append(stack[-1] + 1)
        else:
            stack.append(0 if ing == 1 else -1)
        
        if stack and stack[-1] == 3:
            for i in range(4):
                stack.pop();
            answer+= 1
    
    
    return answer