def solution(absolutes, signs):
    return sum(ab if si else -ab for ab, si in zip(absolutes, signs))