class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        l = A.split(" ")
        k = []
        for i in l:
            if i != "":
                k.append(i)
        k = k[::-1]
        s = ""
        for i in k:
            s += i
            s += ' '
        s = s[:-1]
        return s

