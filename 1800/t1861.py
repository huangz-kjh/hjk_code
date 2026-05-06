class Solution(object):
    def rotateTheBox(self, box):
        m, n = len(box), len(box[0])

        # Step1: 模拟石头下落（向右）
        for row in box:
            empty = n - 1  # 最右侧空位
            for j in range(n - 1, -1, -1):
                if row[j] == '*':
                    empty = j - 1
                elif row[j] == '#':
                    row[j], row[empty] = '.', '#'
                    empty -= 1

        # Step2: 顺时针旋转
        return list(zip(*box[::-1]))
