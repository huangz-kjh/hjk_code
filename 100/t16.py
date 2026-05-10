class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        ans = float('inf')

        for i in range(0, len(nums) - 2):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            l, r = i + 1, len(nums) - 1
            while l < r:
                n = nums[i] + nums[r] + nums[l]
                if n == target:
                    return n

                if abs(ans - target) > abs(n - target):
                    ans = n

                if n > target:
                    r -= 1

                else:
                    l += 1

        return ans

if __name__ == "__main__":
    while 1:
        n = list(map(int, input('请输入nums: List[int]：').split()))
        t = int(input('请输入target：'))
        sol = Solution()
        print(sol.threeSumClosest(n, t))
