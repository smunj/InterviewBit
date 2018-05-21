def fact(n):
    if n <= 1:
        return 1
    return n * fact(n-1)
    
class Solution:
    # @param A : string
    # @return an integer
    def findRank(self, A):
        res = 1
        c = {}
        for ch in A:
            c[ch] = c.get(ch, 0) + 1
        for i in range(len(A)-1):
            r = 0
            for j in range(i+1, len(A)):
                if A[i] > A[j]:
                    r += 1
            temp = fact(len(A) - 1 - i) % 1000003
            temp1 = 1
            for k in c.keys():
                temp1 *= fact(c[k])
            temp1 = pow(temp1, 1000001, 1000003)
            res = (res + ((((r * temp1) % 1000003) * temp) % 1000003)) % 1000003
            c[A[i]] -= 1
        return res
