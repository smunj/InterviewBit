//
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i = A.size() - 1;
    int j = B.size() - 1;
    int k = C.size() - 1;
    int ret = INT_MAX;
    while(i >= 0 && j >= 0 && k >= 0){
        int mini = min(min(A[i], B[j]), C[k]);
        int maxi = max(max(A[i], B[j]), C[k]);
        if(abs(maxi - mini) < ret){
            ret = abs(maxi - mini);
        }
        if(maxi == A[i])
            i--;
        else if(maxi == B[j])
            j--;
        else
            k--;
    }
    return ret;
}

