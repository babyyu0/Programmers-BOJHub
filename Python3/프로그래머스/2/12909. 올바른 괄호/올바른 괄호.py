def solution(s):
    stack = []
    for c in s:
        if c == '(':
            stack.append('(')
        elif stack:
            stack.pop()
        else:
            return False

    return len(stack) == 0