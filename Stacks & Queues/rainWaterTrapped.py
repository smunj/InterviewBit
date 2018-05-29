class Solution:
    # @param A : tuple of integers
    # @return an integer
    def trap(self, A):
        l = 0
        r = len(A) - 1
        
        lh = 0
        rh = 0
        
        ret = 0
        
        while l <= r:
            if A[l] <= A[r]:
                if A[l] > lh:
                    lh = A[l]
                else:
                    ret += lh - A[l]
                l += 1
            else:
                if A[r] > rh:
                    rh = A[r]
                else:
                    ret += rh - A[r]
                r -= 1
        return ret

