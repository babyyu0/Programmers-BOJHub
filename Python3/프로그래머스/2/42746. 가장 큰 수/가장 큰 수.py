import functools

def solution(numbers):
    def compare(x, y):
        return 1 if int(x + y) < int(y + x) else -1
    numbers = [str(n) for n in numbers]
    numbers.sort(key=functools.cmp_to_key(compare))
    
    return ''.join(numbers) if numbers[0] != '0' else "0"