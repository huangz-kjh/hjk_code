class Solution(object):
    def find_mini(self, strs):
        flag = 9999
        flag_value = None
        for i in strs:
            if len(i) < flag:
                flag = len(i)
                flag_value = i
        return flag_value

    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if not strs:
            return ""

        shortest = self.find_mini(strs)
        # shortest = min(strs, key=len)

        for i in range(len(shortest)):
            for s in strs:
                if s[i] != shortest[i]:
                    return shortest[:i]

        return shortest

if __name__=="__main__":
    l = []
    while True:
        e = input("输入元素,‘#’退出,'*'开始")
        if e == "#":
            break
        elif e == "*":
            sol = Solution()
            print(sol.longestCommonPrefix(l))
        else:
            l.append(e)
