//
class Solution:
    # @param A : string
    # @param B : integer
    # @return a strings
    def convert(self, A, B):
        if B == 1:
            return A
        else:
            l = [''] * (2*B-2)
            i = 0
            while i < len(A):
                l[i%(2*B-2)] += A[i]
                i += 1
            # print l
            s = ''
            s += l[0]
            for i in range(1,B-1):
                for j in range(len(l[2*B-2-i])):
                    s += l[i][j]
                    s += l[2*B-2-i][j]
                if len(l[i]) > len(l[2*B-2-i]):
                    s += l[i][-1]
            s += l[B-1]
            return s

