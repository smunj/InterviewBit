int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<bool> B(A.size(), false);
    for(int i = 0; i < A.size(); i++){
        if(B[A[i]-1] == false){
            B[A[i]-1] = true;
        }
        else{
            return A[i];
        }
    }
}

