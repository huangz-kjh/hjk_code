class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        if not digits:
            return []

        nums_dic = {
            2: 'abc', 3: 'def', 4: 'ghi',
            5: 'jkl', 6: 'mno', 7: 'pqrss',
            8: 'tuv', 9: 'wxyz'
        }

        ans = ['']
        for i in digits:
            i = int(i)
            ans = [a + b for a in ans for b in nums_dic[i]]

        return ans


if __name__ == "__main__":
    while 1:
        s = input("请输入s：")

        sol = Solution()
        print(sol.letterCombinations(s))
