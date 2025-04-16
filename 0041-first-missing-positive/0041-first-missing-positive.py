class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = set(i for i in nums if i > 0)
        if 1 not in nums:
            return 1
        maxi= max(nums)
        for i in range(1, maxi + 1):
            if i not in nums:
                return i
        return maxi + 1