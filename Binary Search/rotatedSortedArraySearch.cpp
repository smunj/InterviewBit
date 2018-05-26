int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l = 0;
    int r = A.size() - 1;
    int mid;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(A[mid] == B){
            return mid;
        }
        if(A[l] < A[mid]){
            if(A[l] <= B && A[mid] >= B){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        else{
            if(A[mid] <= B && A[r] >= B){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    }
    return -1;
}

