from collections import deque
def solution(priorities, location):
    answer = 0
    order = sorted(priorities, reverse=True) #빠져나갈 순서
    order_index = 0
    answer = 0
    deq = deque()
    
    for x, y in enumerate(priorities):
        deq.append((x, y))
    
    index, val = None, None
    while deq:
        index, val = deq.popleft()
        if order[order_index] != val:
            deq.append((index, val))
        else:
            answer+= 1
            order_index += 1
            if index == location:
                break
    
    
    return answer