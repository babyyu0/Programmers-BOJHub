def solution(bandage, health, attacks):
    t, x, y = bandage
    full = health
    time, rest = 0, 0
    for attt, attn in attacks:
        rest = attt - time - 1
        health = min(health + (x * rest) + int(rest / t) * y, full) - attn
        time = attt
        # print("현재 시각", time, "에 몬스터에게", attn, "만큼 공격 당해 현재 체력", health)
        if health <= 0: return -1
        
    return health