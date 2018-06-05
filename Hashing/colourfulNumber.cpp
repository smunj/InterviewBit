class Solution:
    # @param A : integer
    # @return an integer
    def colorful(self, A):
        d = {}
        l = []
        A = str(A)
        for i in range(len(A)):
            for j in range(i+1, len(A)+1):
                l.append(A[i:j])
        # print l
        for i in range(len(l)):
            ret = 1
            for j in range(len(l[i])):
                ret = ret * int(l[i][j])
            if ret in d.keys():
                return 0
            else:
                d[ret] = 1
        return 1

