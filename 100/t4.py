class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """

        nums1.extend(nums2)
        nums1.sort()
        lenght = len(nums1)
        if lenght % 2 == 1:
            return nums1[lenght // 2]
        else:
            return (nums1[lenght // 2 - 1] + nums1[lenght // 2]) / 2.0


if __name__ == "__main__":
    while 1:
        # rows = int(input("请输入rows："))
        s1 = list(map(int, input("请输入s1：").split()))
        s2 = list(map(int, input("请输入s2：").split()))
        if s1 == '#':
            break
        else:
            sol = Solution()
            print(sol.findMedianSortedArrays(s1, s2))



