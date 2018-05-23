class Solution:
    # @param A : string
    # @return an integer
    def romanToInt(self, A):
        d = {}
        d['I'] = 1
        d['V'] = 5
        d['X'] = 10
        d['L'] = 50
        d['C'] = 100
        d['D'] = 500
        d['M'] = 1000
        
        w = {}
        w['I'] = 1
        w['V'] = 2
        w['X'] = 3
        w['L'] = 4
        w['C'] = 5
        w['D'] = 6
        w['M'] = 7
        
        i = 0
        count = 0
        while i < len(A):
            if i+1 < len(A):
                if w[A[i]] >= w[A[i+1]]:
                    count += d[A[i]]
                    i += 1
                else:
                    count += d[A[i+1]] - d[A[i]]
                    i += 2
            else:
                count += d[A[i]]
                i += 1
        return count

