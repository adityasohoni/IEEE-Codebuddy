class Solution:
    def paint(self, A, B, C):
        lo = max(C)
        hi = sum(C)
        res = hi
        while lo <= hi:
            mid = (lo + hi)//2
            
            ptr = 1
            grtn = 0
            for item in C: 
                grtn += item
                if grtn > mid:
                    grtn = item
                    ptr += 1
            
            if ptr <= A: 
                hi = mid - 1
                res = mid
            else:
                lo = mid + 1
        
        return (res * B)%10000003
