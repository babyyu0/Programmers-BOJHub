def solution(queue1, queue2):
    answer = 0
    queue, queue_sum = queue1 + queue2, sum(queue1)
    mid_sum = sum(queue) // 2
    # print("Mid Sum:", mid_sum)
    left, right = 0, len(queue1) - 1
    
    while left <= right:
        # print("left:", left, ", right:", right)
        # print("Current Sum:", queue_sum)
        # print("Current Move:", answer)
        # print()

        if queue_sum < mid_sum and right + 1 < len(queue):
            right += 1
            queue_sum += queue[right]
        elif queue_sum > mid_sum:
            queue_sum -= queue[left]
            left += 1
        else:
            break
        answer += 1
    
    return answer if mid_sum == queue_sum else -1