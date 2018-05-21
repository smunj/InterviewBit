mod = 1000003

def fact(n):
    count = 1
    i = 1
    while i <= n:
        count *= i % mod
        i += 1
    return count
        
def findRank(A):
    B = sorted(A)
    ret = 0
    for i in range(len(A)):
    	print(B)
        print (ret)
        print()
        ret += (B.index(A[i]) * (fact(len(A) - i - 1) % mod) % mod) % mod
        B.pop(B.index(A[i]))
    return ret % mod

A = "DTNGJPURFHYEW"
print(findRank(A))

print(fact(11) * 8) % mod