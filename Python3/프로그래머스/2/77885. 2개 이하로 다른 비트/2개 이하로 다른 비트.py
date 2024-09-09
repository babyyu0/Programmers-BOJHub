def solution(numbers):
    answer, fn_map = [], dict()
    bin_str, idx = "", 0
    
    for number in numbers:
        if number not in fn_map:
            bin_str = bin(number)[2:][::-1]
            if '0' in bin_str: # 0이 하나라도 존재할 경우
                idx = bin_str.index('0')
                for i in range(idx - 1, -1, -1):
                    if bin_str[i] == '1':
                        number -= 2 ** i
                        break
                answer.append(number + 2 ** bin_str.index('0'))
            else:
                number += 2 ** len(bin_str)
                number -= 2 ** bin_str.rfind('1')
                answer.append(number)
    return answer