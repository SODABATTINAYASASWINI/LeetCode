class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=0
        v=[]
        c=len(digits)-1
        for i in digits:
            s+=i*10**c
            c-=1
        y=s+1
        y=list(str(y))
        for i in y:
            v.append(int(i))
        return v
        