def solution(str1, str2):
    answer = 0
    def divide_list(dstr):
        dlist = list()
        
        before = None
        for dc in dstr:
            dc = dc.lower()
            if before and before.isalpha() and dc.isalpha(): #첫번째 인덱스가 아닌 경우
                dlist.append(str(before + dc))
            before = dc
        
        return sorted(dlist)
    
    
    list1, list2 = divide_list(str1), divide_list(str2)
    # print(list1)
    # print(list2)
    
    #교집합 원소 찾기
    index1, index2 = 0, 0
    while index1 < len(list1) and index2 < len(list2):
        if list1[index1] == list2[index2]:
            index1 += 1
            index2 += 1
            answer += 1
        elif list1[index1] < list2[index2]:
            index1 += 1
        elif list1[index1] > list2[index2]:
            index2 += 1
    
    answer1, answer2 = answer, len(list1) + len(list2) - answer
    # print("교집합 원소 수:", answer1)
    # print("합집합 원소 수:", answer2)
    
    return ((answer1 / answer2) if answer2 > 0 else 1) * 65536 // 1