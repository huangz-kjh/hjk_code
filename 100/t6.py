class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1 or numRows >= len(s):
            return s

        rows = ['' for _ in range(numRows)]
        cur_row = 0
        flag = False

        for c in s:
            rows[cur_row] += c
            # 到顶了或者到底了换一个方向
            if cur_row == 0 or cur_row == numRows - 1:
                flag = not flag

            cur_row = cur_row + 1 if flag else cur_row - 1

        return ''.join(rows)


if __name__ == "__main__":
    while 1:
        rows = int(input("请输入rows："))
        s = input("请输入s,‘#’退出：")
        if s == '#':
            break
        else:
            sol = Solution()
            print(sol.convert(s, rows))







