class Solution:
    # @param A : string
    # @param B : string
    # @return an integer
    def compareVersion(self, A, B):
        a = A.split('.')
        b = B.split('.')
        if len(a) < len(b):
            for i in range(len(b) - len(a)):
                a.append('0')
        elif len(a) > len(b):
            for i in range(len(a) - len(b)):
                b.append('0')
        for i in range(len(b)):
            if int(a[i]) < int(b[i]):
                return -1
            elif int(a[i]) > int(b[i]):
                return 1
        return 0

