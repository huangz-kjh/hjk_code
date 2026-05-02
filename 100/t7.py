class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """

        if x >= 0:
            s = list(str(x))
            s.reverse()
            s = ''.join(s)
            x = int(s)
            if x < -2 ** 31 or x > 2 ** 31 - 1:
                return 0
            return x
        else:
            s = -x
            s = list(str(s))
            s.reverse()
            s = ''.join(s)
            x = -int(s)
            if x < -2 ** 31 or x > 2 ** 31 - 1:
                return 0
            return x


if __name__ == "__main__":
    while 1:
        # rows = int(input("请输入rows："))
        s = int(input("请输入s："))

        sol = Solution()
        print(sol.reverse(s))



