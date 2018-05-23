class Solution:
    # @param A : string
    # @return an integer
    def isPalindrome(self, A):
        l = []
        for i in range(len(A)):
            if ord(A[i]) >= 97 and ord(A[i]) <= 122:
                l.append(A[i])
            elif ord(A[i]) >= 65 and ord(A[i]) <= 90:
                l.append(A[i].lower())
            elif ord(A[i]) >= 48 and ord(A[i]) <= 57:
                l.append(A[i])
        if l == l[::-1]:
            return 1
        else:
            return 0

