def solution(word):
    order_sum = [781, 156, 31, 6, 1]
    word_list = [0, 0, 0, 0, 0]
    vowel = ['', 'A', 'E', 'I', 'O', 'U']
    answer = 0
    
    
    for i, w in enumerate(word):
        while vowel[word_list[i]] != w:
            word_list[i] += 1
        answer += 1
        if word_list[i] > 1:
            answer += (order_sum[i] * (word_list[i] - 1))
    return answer