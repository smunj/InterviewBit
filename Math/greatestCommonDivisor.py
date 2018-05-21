class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def gcd(self, A, B):
        if A < B:
            temp = A
            A = B
            B = temp
        if A == B:
            return A
        while(B):
            A,B = B, A%B
        return A
