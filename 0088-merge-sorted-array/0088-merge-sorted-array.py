class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i = 0
        j = 0
        v = []
        while(i < m and j < n):
            if(nums1[i] < nums2[j]):
                v.append(nums1[i])
                i += 1
            elif(nums2[j] < nums1[i]):
                v.append(nums2[j])
                j += 1
            elif(nums1[i] == nums2[j]):
                v.append(nums1[i])
                v.append(nums2[j])
                i += 1
                j += 1
        while(i < m):
                v.append(nums1[i])
                i +=1
        while(j < n):
            v.append(nums2[j])
            j+= 1
        for i in range(m + n):
            nums1[i] = v[i]
            
         