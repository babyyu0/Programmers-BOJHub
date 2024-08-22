def solution(operations):
    order, number = None, None
    queue = []
    for o in operations:
        order, number = o.split(" ")
        if order == "I": #삽입 연산
            queue.append(int(number))
        elif order == "D" and len(queue) > 0: #삭제 연산
            queue.sort()
            if number == "-1":
                del queue[0]
            else:
                del queue[-1]
    
    if len(queue) <= 0:
        queue.append(0)
    return [max(queue), min(queue)]