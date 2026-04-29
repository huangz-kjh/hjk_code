class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        flag = 0
        stacks = []
        strs = {
            ')': '(', '}': '{', ']': '[',
            '(': '#', '{': '#', '[': '#'
        }
        for i in s:
            if flag == 0:
                stacks.append(i)
                flag += 1
            elif stacks[flag-1] == strs[i]:
                stacks.pop()
                flag -= 1
            else:
                stacks.append(i)
                flag += 1

        print(stacks)
        return not bool(flag)

if __name__=="__main__":
    while 1:
        s = input("请输入字符串,'#'退出:")
        if s == '#':
            break
        else:
            sol = Solution()
            print(sol.isValid(s))
