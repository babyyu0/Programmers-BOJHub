def solution(dartResult):
    answer = []
    number_str = ""
    
    i = 0
    while i < len(dartResult):
        while dartResult[i].isdigit():
            number_str += dartResult[i]
            i += 1
        
        number_str = int(number_str)
        while i < len(dartResult) and not dartResult[i].isdigit():
            if dartResult[i] == 'S':
                number_str **= 1
            elif dartResult[i] == 'D':
                number_str **= 2
            elif dartResult[i] == 'T':
                number_str **= 3
            elif dartResult[i] == '*':
                number_str *= 2
                if answer:
                    answer[-1] *= 2
            elif dartResult[i] == '#':
                number_str = -number_str
            i += 1
        answer.append(number_str)
        # print(number_str)
        number_str = ""
    
    # print(answer)
    return sum(answer)