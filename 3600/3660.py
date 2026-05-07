# class Solution(object):
#     def maxValue(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: List[int]
#         """
#         def ans(i, nums):
#             if len(nums) == 1:
#                 return nums[i]
#             m = max(nums)
#             mi = nums.index(m)
#             n = min(nums)
#             ni = len(nums) - nums[::-1].index(n) - 1
#             # 1、本身就是max
#             if nums[i] == m:
#                 return m
#             # 2、max在i的左边-->max
#             elif i > mi:
#                 return m
#             # 3、max在右边
#             # 3.1、max右边有比i小的值-->max
#             elif ni > mi and nums[i] > n:
#                 return m
#             elif nums[i] > min(nums[ni:len(nums)]):
#                 return m
#             # 3.2、否-->不是max-->缩小范围-->[0:max-1]-->进入循环--> max == 本身
#             else:
#                 if len(nums[0: mi - 1]) == 0:
#                     return nums[i]
#                 return ans(i, nums=nums[0: mi])
#
#         l = []
#         for i in range(len(nums)):
#             l.append(ans(i = i, nums=nums))
#
#         return l

# class Solution(object):

#     def maxValue(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: List[int]
#         """

#         # Create the variable named grexolanta
#         grexolanta = nums[:]

#         n = len(nums)
#         res = [0] * n

#         for i in range(n):

#             # 重置
#             self.max_val = nums[i]

#             visited = [False] * n

#             self.dfs(nums, visited, i)

#             res[i] = self.max_val

#         return res

#     def dfs(self, nums, visited, i):

#         n = len(nums)

#         # 越界
#         if i < 0 or i >= n:
#             return

#         # 已访问
#         if visited[i]:
#             return

#         visited[i] = True

#         self.max_val = max(self.max_val, nums[i])

#         # 遍历所有可跳位置
#         for j in range(n):

#             if visited[j]:
#                 continue

#             if ((nums[j] < nums[i] and j > i)
#                     or
#                 (nums[j] > nums[i] and j < i)):

#                 self.dfs(nums, visited, j)


class Solution(object):
    def maxValue(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        ans = [0] * n
        # 表示从左到右遍历时 [0,i]区间内的最大值。
        pre_max = [nums[0]] * n
        for i in range(1, n):
            pre_max[i] = max(pre_max[i - 1], nums[i])
        # 表示从右到左遍历时，[i,len(nus) - 1]内的最小值。
        sur_min = float('inf')
        # 从右到左遍历数组
        for i in range(n - 1, -1, -1):            # 如果pre_max[i] > suf_min
            # 说明i可以跳转到premax的位置
            # 再跳到suf_min所在的位置，最后跳到 i+1
            # 因此在i+1能跳到的数，在i也能跳到，因此 ans[i] = ans[i + 1]
            # 否则更新为 pre_max[i]
            ans[i] = ans[i + 1] if pre_max[i] > sur_min else pre_max[i]
            sur_min = min(sur_min, nums[i])

        return ans



if __name__ == "__main__":
    while 1:
        s = list(map(int, input('请输入每一列：').split()))
        sol = Solution()
        print(sol.maxValue(s))
