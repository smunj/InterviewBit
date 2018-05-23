class Solution:
    # @param A : string
    # @return an integer
    def power(self, A):
        if A == '1':
            return 0
        if (int(A) & (int(A)-1)) == 0:
            return 1
        else:
            return 0

