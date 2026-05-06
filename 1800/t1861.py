class Solution(object):
    def rotateTheBox(self, boxGrid):
        """
        :type boxGrid: List[List[str]]
        :rtype: List[List[str]]
        """
        m, n = len(boxGrid), len(boxGrid[0])

        for row in boxGrid:
            empty = n - 1
            for j in range(n - 1, -1, -1):
                if row[j] == "*":
                    empty = j - 1
                elif row[j] == '#':
                    row[j], row[empty] = row[empty], row[j]
                    empty -= 1


        # print(boxGrid)
        # 转置
        transposed_boxGrid = [list(row) for row in zip(*boxGrid)]
        # 水平翻转
        for row in transposed_boxGrid:
            row.reverse()

        return transposed_boxGrid
        # print(transposed_boxGrid)

if __name__ == "__main__":
    while 1:
        n = int(input('请输入n：'))
        s = [list(input('请输入每一列：').split()) for _ in range(n)]
        sol = Solution()
        print(sol.rotateTheBox(s))
