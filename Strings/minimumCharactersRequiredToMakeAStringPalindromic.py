class Solution:
    # @param A : string
    # @return an integer
    def solve(self, A):
        j = len(A)
        flag = True
        while flag:
            if A[:j] == A[:j][::-1]:
                flag = False
            else:
                j -= 1
        return len(A) - j

