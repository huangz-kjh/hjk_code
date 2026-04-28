class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        find_table = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                      'XC': 90, 'C': 100, 'D': 500, 'M': 1000}
        answer = 0

        for i in range(len(s)):
            if i < len(s) - 1 and find_table[s[i]] < find_table[s[i + 1]]:
                answer -= find_table[s[i]]
            else:
                answer += find_table[s[i]]

        return answer

if __name__=="__main__":
    s = input("输入罗马数字")
    sol = Solution()
    print(sol.romanToInt(s))
