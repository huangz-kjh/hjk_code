# class Solution(object):
#     def rotate(self, matrix):
#         """
#         :type matrix: List[List[int]]
#         :rtype: None Do not return anything, modify matrix in-place instead.
#         """
#         n = len(matrix)
#
#         copyMatrix = [[matrix[r][c] for c in range(n)] for r in range(n)]
#
#         # tr = c, tc = n - r - 1
#         for r in range(n):
#             for c in range(n):
#                 tr = c
#                 tc = n - r - 1
#                 matrix[tr][tc] = copyMatrix[r][c]
class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """

        # 转置矩阵
        # for i in range(len(matrix)):
        #     for j in range(i + 1, len(matrix)):
        #         matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        matrix[:] = [list(row) for row in zip(*matrix)]

        # 水平翻转
        for row in matrix:
            row.reverse()

        return matrix


if __name__ == "__main__":
    while 1:
        n = int(input("请输入matrix的大小：nXn"))
        m = list(list(map(int, input(f'请输入第{_+1}行').split())) for _ in range(n))

        # print(m)
        sol = Solution()
        print(sol.rotate(m))
