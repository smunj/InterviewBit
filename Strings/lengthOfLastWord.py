class Solution:
    # @param A : string
    # @return an integer
    def lengthOfLastWord(self, A):
        l = A.split(' ')
        # print l
        while len(l) > 0 and l[-1] == "":
            l.pop()
        if len(l) > 0:
            return len(l[-1])
        else:
            return 0

