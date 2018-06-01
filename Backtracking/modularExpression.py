def fn(A, B, C):
        if B == 0:
            return 1
        elif B % 2 == 0:
            x = fn(A, B/2, C)
            return ((x % C) * (x % C)) % C
        else:
            return ((A % C) * (fn(A, B-1, C) % C)) % C

class Solution:
    # @param A : integer
    # @param B : integer
    # @param C : integer
    # @return an integer
    
    def Mod(self, A, B, C):
        if A == 0:
            return 0
        return fn(A, B, C)

