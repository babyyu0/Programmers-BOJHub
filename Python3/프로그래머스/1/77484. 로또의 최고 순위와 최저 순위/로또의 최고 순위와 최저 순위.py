def solution(lottos, win_nums):
    correct = sum(1 for lotto in lottos if lotto not in win_nums) + 1
    return [min(6, correct - lottos.count(0)), min(6, correct)]