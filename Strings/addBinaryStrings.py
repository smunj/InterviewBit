class Solution:
    # @param A : string
    # @param B : string
    # @return a strings
    def addBinary(self, A, B):
        if len(A) > len(B):
            k = len(A) - len(B)
            s = '0' * k
            B = s + B
        elif len(A) < len(B):
            k = len(B) - len(A)
            s = '0' * k
            A = s + A
        temp = 0
        s = ''
        # print A
        # print B
        # print len(A)
        # print len(B)
        for i in range(len(A)):
            ret = int(A[-1-i]) + int(B[-1-i]) + temp
            if ret == 0:
                s += '0'
                temp = 0
            elif ret == 1:
                s += '1'
                temp = 0
            elif ret == 2:
                s += '0'
                temp = 1
            elif ret == 3:
                s += '1'
                temp = 1
        if temp == 1:
            s += '1'
        return s[::-1]
