class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
        s = ""
        for i in A:
            s += str(i)
        ans = str(int(s) + 1)
        l = []
        for i in range(len(ans)):
            l.append(ans[i])
        return l
