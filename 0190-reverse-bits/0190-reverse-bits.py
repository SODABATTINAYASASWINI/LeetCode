class Solution:
    def reverseBits(self, n: int) -> int:
        s = f"{n:032b}"
        t = s[::-1]
        return int(t,2)