def solution(ineq, eq, n, m):
    if ineq == ">":
        return int(n >= m) if eq == "=" else int(n > m)
    return int(n <= m) if eq == "=" else int(n < m)