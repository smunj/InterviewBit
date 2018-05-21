class Solution:
    # @param A : integer
    # @return an integer
    def reverse(self, A):
        A = str(A)
        if A[0] == '-':
            A = '-' + str(int(A[1:][::-1]))
            if int(A[1:]) > 2147483648:
                return 0
            else:
                return A
        else:
            A = str(int(A[::-1]))
            if int(A) > 2147483648:
                return 0
            else:
                return A
