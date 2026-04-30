# class Solution(object):
#     def isPalindrome(self, s):
#         return s == s[::-1]
#
#     def longestPalindrome(self, s):
#         if not s:
#             return ""
#
#         max_len = 0
#         res = ""
#
#         for i in range(len(s)):
#             for j in range(i, len(s)):
#                 substr = s[i:j+1]
#                 if self.isPalindrome(substr):
#                     if len(substr) > max_len:
#                         max_len = len(substr)
#                         res = substr
#
#         return res

class Solution(object):
    def longestPalindrome(self, s):
        if not s:
            return ""

        def expand(left, right):
            while left >= 0 and right < len(s) and s[left] == s[right]:
                left -= 1
                right += 1
            return s[left+1:right]

        res = ""

        for i in range(len(s)):
            # 奇数长度
            s1 = expand(i, i)
            # 偶数长度
            s2 = expand(i, i+1)

            res = max(res, s1, s2, key=len)

        return res


if __name__ == "__main__":
    while 1:
        s = input("请输入s：‘#’退出：")
        if s == '#':
            break
        else:
            sol = Solution()
            print(sol.longestPalindrome(s))







