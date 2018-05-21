def gcd(A, B):
    if A < B:
        temp = A
        A = B
        B = temp
    if A == B:
        return A
    while B:
        A, B = B, A%B
    return A
 
class Solution:
    # @param A : integer
    # @param B : integer
    # @return an integer
    def cpFact(self, A, B):
        while gcd(A,B) != 1:
            A = A / gcd(A,B)
        return A
