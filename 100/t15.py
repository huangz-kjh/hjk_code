class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        n = len(nums)
        ans = []

        for i in range(n - 2):
            if nums[i] > 0:
                break
            if i and nums[i] == nums[i - 1]:
                continue
            l, r = i + 1, n - 1
            while l < r:
                x = nums[i] + nums[l] + nums[r]
                if x < 0:
                    l += 1
                elif x > 0:
                    r -= 1
                else:
                    ans.append([nums[i], nums[l], nums[r]])
                    l, r = l + 1, r - 1
                    while l < r and nums[l] == nums[l - 1]:
                        l += 1
                    while l < r and nums[r] == nums[r + 1]:
                        r -= 1
        return ans



if __name__ == "__main__":
    while 1:
        s = list(map(int, input('请输入每一列：').split()))
        sol = Solution()
        print(sol.threeSum(s))
