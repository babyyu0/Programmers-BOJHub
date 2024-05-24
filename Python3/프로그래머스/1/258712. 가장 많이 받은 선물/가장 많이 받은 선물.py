def solution(friends, gifts):    
    #선물 횟수 및 선물 지수 저장
    giftCnt = [[0] * len(friends) for i in range(len(friends))] #선물 횟수
    giftIndex = [0] * len(friends) #선물 지수
    for gift in gifts:
        a, b = gift.split()
        giftCnt[friends.index(a)][friends.index(b)] += 1
        giftIndex[friends.index(a)] += 1
        giftIndex[friends.index(b)] -= 1
    
    #선물 받을 횟수 count
    willGift = [0] * len(friends) #선물 받을 횟수
    for i, f in enumerate(giftCnt):  #각 친구들별 선물 준 횟수 돌리기
        for j, gf in enumerate(f): #선물 받는 친구 구하기
            if gf > giftCnt[j][i] or gf == giftCnt[j][i] and giftIndex[i] > giftIndex[j]:
                willGift[i]+=1
        
    return max(willGift)