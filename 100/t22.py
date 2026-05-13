class Solution(object):
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        DFS+剪枝(树形)
        """
        ans = []

        def dfs(l, r, t):
            if r > n or l > n or l < r:
                return
            if r == n and l == n:
                ans.append(t)
                return
            dfs(l+1, r, t+'(')
            dfs(l, r+1, t+')')

        dfs(0, 0, '')
        return ans


if __name__ == "__main__":
    n = int(input("请输入n:"))
    sol = Solution()
    print(sol.generateParenthesis(n))
