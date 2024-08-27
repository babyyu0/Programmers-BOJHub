def solution(m, n, puddles):
    answer = 0
    dp = [([0] * m) for i in range(n)]
    dp[0][0] = 1
    
    for c, r in puddles:
        dp[r - 1][c - 1] = -1
    
    for i in range(n):
        for j in range(m):
            if dp[i][j] != -1:
                dp[i][j] += (dp[i - 1][j] if 0 <= i - 1  else 0)
                dp[i][j] += (dp[i][j - 1] if 0 <= j - 1 else 0)
            else:
                dp[i][j] = 0
            dp[i][j] %= 1000000007
    
    return dp[n - 1][m - 1]