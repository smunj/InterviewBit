class Solution:
    # @param A : integer
    # @return a strings
    def findDigitsInBinary(self, A):
        if A == 0:
            return 0
        s = ''
        while(A):
            if(A%2 == 0):
                s += '0'
            else:
                s += '1'
            A /= 2
        return s[::-1]

