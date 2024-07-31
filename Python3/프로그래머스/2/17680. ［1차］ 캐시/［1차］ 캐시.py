from collections import deque

def solution(cacheSize, cities):
    if cacheSize == 0:
        return len(cities) * 5
    
    cache, answer = deque(), 0
    
    popped, flag = "", None
    for city in cities:
        city = city.lower()
        flag = False
        for i in range(len(cache)):
            popped = cache.popleft()
            if popped == city:
                flag = True
                i -= 1
            else:
                cache.append(popped)
        if flag: #cache hit
            answer += 1
        else: #cache miss
            answer += 5
            if len(cache) >= cacheSize:
                cache.popleft()
        cache.append(city)
    
    return answer