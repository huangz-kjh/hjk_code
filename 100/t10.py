class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        m, n = len(s), len(p)
        dp = [[False] * (n + 1) for _ in range(m + 1)]

        dp[0][0] = True  # 空串匹配空串

        # s = ''的情况
        for j in range(2, n + 1):
            if p[j - 1] == '*':
                dp[0][j] = dp[0][j - 2]

        # s != ''的情况
        i = 1
        for j in range(1, n + 1):
            for i in range(1,  m + 1):
                if p[j - 1] == s[i - 1] or p[j - 1] == '.':
                    dp[i][j] = dp[i - 1][j - 1]
                    i += 1
                elif p[j - 1] == '*':
                    # 匹配 0 次
                    dp[i][j] = dp[i][j - 2]

                    # 匹配 大于 1 次
                    if s[i - 1] == p[j - 2] or p[j - 2] == '.':
                        dp[i][j] = dp[i][j] or dp[i - 1][j]
                        i += 1

        return dp[m][n]


if __name__ == "__main__":
    while 1:
        s = input("请输入s：(s 只包含从 a-z 的小写字母)")
        p = input("请输入p：(p 只包含从 a-z 的小写字母，以及字符 . 和 *)")

        sol = Solution()
        print(sol.isMatch(s, p))
