class Solution:
    # @param A : string
    # @return an integer
    def isNumber(self, A):
        i = 0
        while i < len(A) and A[i] == ' ':
            i += 1
        if i == len(A):
            return 0
        while A[len(A)-1] == ' ':
            A = A[:-1]
        
        num = 0
        e = 0
        dec = 0
        sign = 0 
        
        while i < len(A):
            if A[i] >= '0' and A[i] <= '9':
                i += 1
                num = 1
            else:
                if A[i] == 'e':
                    if num == 0:
                        return 0
                    e = 1
                    sign = 0
                    dec = 0
                    num = 0
                    i += 1
                    if i == len(A):
                        return 0
                elif A[i] == '+' or A[i] == '-':
                    i += 1
                    if i == len(A):
                        return 0
                    if sign == 0:
                        sign = 1
                    else:
                        return 0
                    if num != 0:
                        return 0
                elif A[i] == '.':
                    if dec == 0:
                        dec == 1
                    else:
                        return 0
                    if e == 1:
                        return 0
                    num = 1
                    i += 1
                    if i == len(A):
                        return 0
                    elif A[i] <= '0' or A[i] >= '9':
                        return 0
                else:
                    return 0
        return 1
