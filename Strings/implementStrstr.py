class Solution:
    # @param A : string
    # @param B : string
    # @return an integer
    def strStr(self, A, B):
        A = A.lower()
        B = B.lower()
        l = len(B)
        j = 0
        while j + len(B) <= len(A):
            if A[j:j+len(B)] == B:
                return j
            j += 1
        return -1

