class Solution:
    # @param A : list of strings
    # @return an integer
    def evalRPN(self, A):
        stack = []
        for i in range(len(A)):
            if A[i] == "+" or A[i] == "-" or A[i] == "*" or A[i] == "/":
                a = stack.pop()
                b = stack.pop()
                if A[i] == "+":
                    stack.append(a+b)
                if A[i] == "-":
                    stack.append(b-a)
                if A[i] == "*":
                    stack.append(a*b)
                if A[i] == "/":
                    stack.append(b/a)
            else:
                stack.append(int(A[i]))
        return stack[0]
        
