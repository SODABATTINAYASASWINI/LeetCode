class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        c = 0
        while(i < len(nums)):
            if(i == 0):
                t1 = nums[i]
                c = 1
                i += 1
                continue
            t1 = nums[i]
            t2 = nums[i - 1]
            if(t1 == t2):
                c += 1
                if c > 2:
                    nums.pop(i)
                    # c = 1
                    continue
                i += 1
            else:
                c = 1
                i += 1
        return len(nums)