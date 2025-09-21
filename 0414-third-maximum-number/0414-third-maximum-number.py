class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        v=[]
        for i in nums:
            if i not in v:
                v.append(i)
        s=sorted(v)
        if(len(s)<3):
            return max(nums)
        else:
            return s[-3]
        

       