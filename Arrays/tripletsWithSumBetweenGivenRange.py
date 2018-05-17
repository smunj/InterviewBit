class Solution:
    # @param A : list of strings
    # @return an integer
    def solve(self, A):
        B = [float(i) for i in A]
        X = []
        Y = []
        Z = []
        for i in B:
            if i < (2./3.):
                X.append(i)
            elif i <= 1:
                Y.append(i)
            else:
                Z.append(i)
        X = sorted(X)
        Y = sorted(Y)
        Z = sorted(Z)
        ans = 0
        if len(X) >= 3:
            if(X[-1] + X[-2] + X[-3] >= 1):
                ans = 1
        if ans == 1:
            return ans
        if len(X) >= 2 and len(Z) >= 1:
            if(X[0] + X[1] + Z[0] <= 2):
                ans = 1
        if ans == 1:
            return ans
        if len(X) >= 1 and len(Y) >= 2:
            if(X[0] + Y[0] + Y[1] <= 2):
                ans = 1
        if ans == 1:
            return ans
        if len(X) >= 1 and len(Y) >= 1 and len(Z) >= 1:
            if(X[0] + Y[0] + Z[0] <= 2):
                ans = 1
        if ans == 1:
            return ans
        if len(X) >= 2 and len(Y) >= 1:
            if(X[-1] + X[-2] + Y[0] > 1 and X[-1] + X[-2] + Y[0] < 2):
                ans = 1
        if ans == 1:
            return ans
        if len(X) >= 2 and len(Y) >= 1:
            if(X[0] + X[1] + Y[-1] > 1 and X[0] + X[1] + Y[-1] < 2):
                ans = 1
        return ans
