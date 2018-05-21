class Solution:
    # @param A : integer
    # @return a strings
    def convertToTitle(self, A):
        s = ""
        while A > 0:
            r = A % 26
            if r == 0:
                s += 'Z'
                A = (A / 26) - 1
            else:
                s += chr(r + 64)
                A = A / 26
        s = s[::-1]
        return s
