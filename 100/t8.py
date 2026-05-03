class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        n = len(s)
        # 跳过前置空格
        while i < n and s[i] == " ":
            i += 1

        # 读取‘+’‘-’
        sign = 1
        if i < n and s[i] in ['+', '-']:
            if s[i] == '-':
                sign = -1
            i += 1

        # 读取数字
        nums = 0
        while i < n and s[i].isdigit():
            nums = nums * 10 + int(s[i])
            i += 1

        nums = nums * sign

        # 设置范围
        MAXNUM = 2 ** 31 - 1
        MINNUM = - (2 ** 31)
        if nums > MAXNUM:
            nums = MAXNUM
        elif nums < MINNUM:
            nums = MINNUM

        return nums


if __name__ == "__main__":
    while 1:
        # rows = int(input("请输入rows："))
        s = input("请输入s：")

        sol = Solution()
        print(sol.myAtoi(s))
