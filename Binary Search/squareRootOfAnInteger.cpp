int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A == 0 || A == 1)
        return A;
        
    long int s = 1;
    long int e = A;
    long int ans;
    
    while(s <= e){
        long int m = (s + e) / 2;
        
        if(m*m == A)
            return m;
        if(m*m < A){
            s = m + 1;
            ans = m;
        }
        else{
            e = m - 1;
        }
    }
    return ans;
}

