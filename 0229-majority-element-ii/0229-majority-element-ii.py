class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n=len(nums)
        s=[]
        p=[]
        for i in nums:
            if i not in s:
                s.append(i)
        v=[]
        for i in s:
            if(nums.count(i) > len(nums)//3):
                v.append(i)
        return v

        
