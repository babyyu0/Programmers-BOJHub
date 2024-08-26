import heapq

def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)
    while 2 <= len(scoville):
        if all(i >= K for i in scoville):
            return answer
        
        answer += 1
        heapq.heappush(scoville, heapq.heappop(scoville) + (heapq.heappop(scoville) * 2))
        
    if all(i >= K for i in scoville):
        return answer
    return -1