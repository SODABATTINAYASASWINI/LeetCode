class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        v=[]
        c=0
        for i in nums:
            v.append(len(str(i)))
        for i in v:
            if(i%2==0):
                c+=1
        return c