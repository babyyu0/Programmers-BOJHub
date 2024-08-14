def solution(n, t, m, p):
    answer = ''
    
    numlist = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']
    str_num = ""
    whole_str = "0"
    for i in range(m * t):
        str_num = ""
        while 0 < i:
            str_num = numlist[i % n] + str_num
            i //= n
        whole_str += str_num
        
    return whole_str[p - 1:len(whole_str):m][:t]