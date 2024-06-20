def solution(s):
    nums = [str(i) for i in range(0, 10)]
    for c in s:
        if c not in nums:
            return False
    return True if len(s) == 4 or len(s) == 6 else False