class Solution:
    # @param A : list of integers
    # @return a list of integers
    def lszero(self, A):
        d = {}
        l = 0
        s = 0
        ind = -1
        end = -1
        for i in range(len(A)):
            s += A[i]
            if A[i] == 0 and l == 0:
                l = 1
                ind = i-1
                end = i
            if s == 0:
                l = i + 1
                ind = -1
                end = i
            if s in d:
                temp = max(l, i - d[s])
                if temp != l:
                    ind = d[s]
                    end = i
                l = temp
            else:
                d[s] = i
        # print d
        # print ind, end
        if l == 0:
            return []
        return A[ind+1:end+1]
