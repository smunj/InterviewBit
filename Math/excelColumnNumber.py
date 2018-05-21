class Solution:
    # @param A : string
    # @return an integer
    def titleToNumber(self, A):
        ret = 0
        for i in range(len(A)):
            ret = ret * 26
            ret += ord(A[i]) - ord('A') + 1
        return ret
