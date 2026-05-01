class Solution(object):
    def convert(self, s, numRows):
        if numRows == 1 or numRows >= len(s):
            return s

        rows = [''] * numRows
        cur_row = 0
        going_down = False

        for c in s:
            rows[cur_row] += c

            # 到顶或到底，改变方向
            if cur_row == 0 or cur_row == numRows - 1:
                going_down = not going_down

            cur_row += 1 if going_down else -1

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







