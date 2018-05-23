def valid(A):
    A = A.split('.')
    # print A
    # print len(A)
    for i in A:
        # print i
        if (len(i) > 3):
            return False
        if int(i) < 0:
            return False
        if int(i) > 255:
            return False
        if len(i) > 1 and int(i) != 0 and i[0] == '0':
            # print 'z'
            return False
        if len(i) > 1 and int(i) == 0:
            # print 'x'
            return False
    return True

class Solution:
    # @param A : string
    # @return a list of strings
    def restoreIpAddresses(self, A):
        l = len(A)
        ret = []
        if l > 12:
            return []
        new_A = A
        for i in range(1, l-2):
            for j in range(i+1, l-1):
                for k in range(j+1, l):
                    new_A = new_A[:k] + '.' + new_A[k:]
                    new_A = new_A[:j] + '.' + new_A[j:]
                    new_A = new_A[:i] + '.' + new_A[i:]
                    if valid(new_A):
                        ret.append(new_A)
                    new_A = A
        return ret

