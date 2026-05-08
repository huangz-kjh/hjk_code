from array import array
from bisect import bisect
from collections import defaultdict


class Solution:
    def intToRoman(self, num: int) -> str:
        roman_dict = {
            'I': 1, 'IV': 4, 'V': 5, 'IX': 9,
            'X': 10, 'XL': 40, 'L': 50, 'XC': 90,
            'C': 100, 'CD': 400, 'D': 500, 'CM': 900,
            'M': 1000
        }
        roman_dict = dict(sorted(roman_dict.items(),
                                 key=lambda x: x[1],
                                 reverse=True))

        ans = []
        for r, v in roman_dict.items():
            while num >= v:
                num -= v
                ans.append(r)

        return ''.join(ans)

if __name__ == "__main__":
    while 1:
        s = int(input('请输入每一列：'))
        sol = Solution()
        print(sol.intToRoman(s))
