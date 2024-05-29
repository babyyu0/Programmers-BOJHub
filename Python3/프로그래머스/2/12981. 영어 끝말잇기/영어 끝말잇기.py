def solution(n, words):
    before =words[0][0]
    
    for i, word in enumerate(words):
        if before[-1] != word[0]:
            return [i % n + 1, i // n + 1]
        elif word in words[:i]:
            return [i % n + 1, i // n + 1]
        before = word
    
    return [0, 0]