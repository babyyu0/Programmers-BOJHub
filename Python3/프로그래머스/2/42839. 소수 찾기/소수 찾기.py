import math
prime_num = set()

def permutation(numbers, visited, N, select):
    for i in range(N):
        if not visited[i]:
            select.append(numbers[i])
            prime_num.add(int(''.join(select)))
            visited[i] = True
            permutation(numbers, visited, N, select)
            visited[i] = False
            select.pop()

def is_prime(number):
    if number <= 1:
        return False
    for i in range(2, int(math.sqrt(number)) + 1):
        if number % i == 0:
            return False
    return True
            
def solution(numbers):
    answer = 0
    numbers = list(numbers)
    permutation(numbers, [False] * len(numbers), len(numbers), [])
    
    return len([i for i in prime_num if is_prime(i)])