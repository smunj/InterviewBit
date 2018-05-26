int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    for(int i = 0; i < A.size(); i++){
        if(A[i][0] <= B && A[i][A[0].size()-1] >= B){
            int l = 0;
            int r = A[i].size()-1;
            while(l <= r){
                int mid = l + (r - l) / 2;
                if(A[i][mid] == B){
                    return 1;
                }
                else if(A[i][mid] > B){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
        }
    }
    return 0;
}
