def solution(numbers, target):
    answer = 0
    def dfs(res, index):
        if index == len(numbers):
            nonlocal answer
            answer += int(res == target)
            return
        dfs(res + numbers[index], index + 1)
        dfs(res - numbers[index], index + 1)
    dfs(0, 0)
    return answer