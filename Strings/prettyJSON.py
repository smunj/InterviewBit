//
class Solution:
    # @param A : string
    # @return a list of strings
    def prettyJSON(self, A):
        A = A.split(' ')
        i = 0
        while i < len(A):
            if A[i] == '':
                A.pop(i)
            else:
                i += 1
        ppp = ''
        for i in A:
            ppp += i
        A = ppp
        # print A
        k = []
        indent = 0
        i = 0
        while i < len(A):
            if A[i] == '[' or A[i] == '{':
                k.append([A[i], indent])
                indent += 1
                i += 1
            elif A[i] == ']' or A[i] == '}':
                if i != len(A) - 1 and A[i+1] == ',':
                    indent -= 1
                    k.append([A[i] + A[i+1], indent])
                    i += 2
                else:
                    indent -= 1
                    k.append([A[i], indent])
                    i += 1
            else:
                s = ''
                while A[i] != ',' and A[i] != '{' and A[i] != '['and A[i] != '}' and A[i] != ']' and i < len(A):
                    s += A[i]
                    i += 1
                if i != len(A) and A[i] != ']' and A[i] != '}' and A[i] != '{' and A[i] != '[':
                    s += A[i]
                    i += 1
                    k.append([s, indent])
                else:
                    k.append([s, indent])
        for i in range(len(k)):
            k[i] = '\t'*k[i][1] + k[i][0]
        return k
