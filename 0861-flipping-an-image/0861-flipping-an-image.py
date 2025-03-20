class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        l=[]
        for i in image:
            g=i[::-1]
            v=[]
            for k in g:
                if(k == 0):
                    v.append(1)
                else:
                    v.append(0)
            l.append(v)
        return l
            