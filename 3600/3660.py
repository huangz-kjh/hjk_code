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
class Solution(object):
    def maxValue(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        n = len(nums)
        ans = [0] * n
        pre_max = [nums[0]] * n
        for i in range(1, n):
            pre_max[i] = max(pre_max[i - 1], nums[i])
        suf_min = float('inf')
        for i in range(n - 1, -1, -1):
            ans[i] = ans[i + 1] if pre_max[i] > suf_min else pre_max[i]
            suf_min = min(suf_min, nums[i])
        return ans



if __name__ == "__main__":
    while 1:
        s = list(map(int, input('请输入每一列：').split()))
        sol = Solution()
        print(sol.maxValue(s))
