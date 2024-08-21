def solution(msg):
    answer, adict, order = [], {}, 27
    for i in range(ord('A'), ord('Z') + 1): #사전에 알파벳 추가
        adict[chr(i)] = i - 64
    
    full = "" #사전에 등재된 단어 저장
    for c in msg:
        print("==== 현재 단어:", c, "====")
        full += c #사전에 해당 단어가 있을 때까지 단어 더하기
        if full not in adict:  #(w + c) 단어가 사전에 등록되어있지 않을 경우
            answer.append(adict[full[:-1]]) #w를 출력
            adict[full] = order #(w + c)를 사전에 등록
            order += 1 # 인덱스 증가
            full = full[-1] #입력에서 w 제거
    
    if full != "":
        answer.append(adict[full])
    
    return answer