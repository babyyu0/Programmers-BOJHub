def solution(a, b):
    answer = 0
    return int(max(int(f'{a}{b}'), 2 * a * b))