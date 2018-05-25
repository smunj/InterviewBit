int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i = 0;
    int count = 1;
    while(i < A.size() - 1){
        if(A[i] == A[i+1]){
            i++;
        }
        else{
            A[count] = A[i+1];
            count++;
            i++;
        }
    }    
    A.resize(count);
    return count;
}

