def solution(people, limit):
    people.sort(reverse=True)
    answer = 0
    n = len(people) - 1
    for i, kg in enumerate(people):
        if n < i: break
        if kg + people[n] <= limit:
            n -= 1
        answer += 1
    return answer