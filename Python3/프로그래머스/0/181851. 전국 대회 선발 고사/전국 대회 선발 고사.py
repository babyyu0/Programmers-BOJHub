def solution(rank, attendance):
    rank = [(x, i) for i, x in enumerate(rank) if attendance[i]]
    rank.sort()
    return 10000 * rank[0][1] + 100 * rank[1][1] + rank[2][1]