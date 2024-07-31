from collections import deque

def solution(cacheSize, cities):
    if cacheSize == 0:
        return len(cities) * 5
    
    cache, answer = deque(), 0
    
    popped, flag = "", None
    for city in cities:
        city = city.lower()
        if city in cache: #cache hit
            answer += 1
            cache.remove(city)
        else: #cache miss
            answer += 5
            if len(cache) >= cacheSize:
                cache.popleft()
        cache.append(city)
    
    return answer