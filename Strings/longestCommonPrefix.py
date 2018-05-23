class Solution:
    # @param A : list of strings
    # @return a strings
    def longestCommonPrefix(self, A):
        s = ""
        c = 0
        flag = True
        while(c < len(A[0])):
            temp = A[0][c]
            for i in range(1,len(A)):
                if len(A[i]) <= c or A[i][c] != temp:
                    flag = False
            if flag:
                s += A[0][c]
                c += 1
            else:
                return s
        if flag:
            return s
                    

