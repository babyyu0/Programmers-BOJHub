from collections import deque

def solution(bridge_length, weight, truck_weights):
    i, time, cur_weight = 0, 0, 0
    queue, truck, dist = deque(), 0, 0
    queue.append([0, bridge_length])
    
    while queue:
        time += 1
        # print("time:", time, "/ queue:", queue)
        for q in range(len(queue)):
            truck, dist = queue.popleft()
            if dist + 1 < bridge_length:
                queue.append([truck, dist + 1])
            else:
                cur_weight -= truck
        if len(queue) < bridge_length and i < len(truck_weights) and cur_weight + truck_weights[i] <= weight:
            cur_weight += truck_weights[i]
            queue.append([truck_weights[i], 0])
            i += 1
    
    
    return time