class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        if nums is []:
            return []

        nums.sort()
        n = len(nums)
        ans = []

        for i in range(n - 3):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            # 剪枝
            # 最小值都比 target 大
            if nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target:
                break
            # 最大值都比 target 小
            if nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target:
                continue

            for j in range(i + 1, n - 2):
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue
                # 剪枝
                # 当前最小值已经大于 target
                if nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target:
                    break

                # 当前最大值仍然小于 target
                if nums[i] + nums[j] + nums[n - 1] + nums[n - 2] < target:
                    continue

                l, r = j + 1, n - 1
                while l < r:
                    a = nums[i] + nums[j] + nums[l] + nums[r]
                    if a == target:
                        ans.append([nums[i], nums[j], nums[l], nums[r]])
                        l += 1
                        r -= 1
                        # import
                        while l < r and nums[l] == nums[l - 1]:
                            l += 1
                        while l < r and nums[r] == nums[r + 1]:
                            r -= 1
                    else:
                        if a < target:
                            l += 1
                        elif a > target:
                            r -= 1

        return ans

if __name__ == "__main__":
    while 1:
        n = list(map(int, input('请输入nums: List[int]：').split()))
        t = int(input('请输入target：'))
        sol = Solution()
        print(sol.fourSum(n, t))
