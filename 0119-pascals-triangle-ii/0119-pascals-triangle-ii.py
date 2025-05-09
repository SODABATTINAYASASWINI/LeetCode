class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        m=[]
        for i in range(0,rowIndex+1):
            v=[]
            if(i==0):
                v.append(1)
            elif(i==1):
                v.append(1)
                v.append(1)
            else:
                v.append(1)
                for k in range(len(m[-1])-1):
                    v.append(m[-1][k]+m[-1][k+1])
                v.append(1)
            m.append(v)
        return m[-1]

            

        
        
                    
            
        