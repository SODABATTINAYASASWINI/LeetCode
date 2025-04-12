class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        v=[]
        for i in range(len(nums)):
            for j in  range(i+1,len(nums)):
                if(nums[i]+nums[j]==target):
                    v.append(i)
                    v.append(j)
        return v
        
            

        