class Solution:
    # @param A : unsigned integer
    # @return an unsigned integer
    def reverse(self, A):
        get_bin = lambda x, n: format(x, 'b').zfill(n)
        x = get_bin(A,32)[::-1]
        return int(x,2)

