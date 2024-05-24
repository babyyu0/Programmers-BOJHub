def solution(rank, attendance):
    rank = [[101 if attendance[i] == False else rank[i], i] for i in range(len(rank))]
    rank.sort()
    return 10000 * rank[0][1] + 100 * rank[1][1] + rank[2][1]