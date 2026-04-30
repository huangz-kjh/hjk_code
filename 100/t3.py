class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        sSet = {'' : 0}
        for i in range(len(s)):
            s1 = ''
            for j in s[i:]:
                if j not in s1:
                    s1 += j
                    sSet[s1] = len(s1)
                else:
                    sSet[s1] = len(s1)
                    break

        return max(sSet.values())


if __name__ == "__main__":
    while 1:
        s = input("请输入s：‘#’退出：")
        if s == '#':
            break
        else:
            sol = Solution()
            print(sol.lengthOfLongestSubstring(s))







