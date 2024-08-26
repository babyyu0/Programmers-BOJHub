import heapq

def solution(n, works):
    works = [-work for work in works]
    heapq.heapify(works)
    a = 0
    while 0 < n and works:
        heapq.heappush(works, heapq.heappop(works) + 1)
        # heapq.heapify(works)
        n -= 1
    return sum(work ** 2 for work in works if work < 0)