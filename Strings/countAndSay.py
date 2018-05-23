def fn(A):
    i = 1
    j = 1
    s = ""
    temp = A[0]
    while(i < len(A)):
        if A[i] == temp:
            j += 1
        else:
            s += str(j)
            s += str(temp)
            temp = A[i]
            j = 1
        i += 1
    s += str(j)
    s += str(temp)
    return s

l = [str(1)]    
for i in range(1, 52):
    l.append(fn(l[i-1]))

class Solution:
    # @param A : integer
    # @return a strings
    def countAndSay(self, A):
        return l[A-1]
        
        

