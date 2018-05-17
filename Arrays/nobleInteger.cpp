int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int ret = -1;
    if(A.size() == 0)
        return ret;
    int i = 0;
    while(i < A.size()){
        while(i+1 < A.size() && A[i] == A[i+1])
            i++;
        if(A.size() - (i+1) == A[i]){
            ret = 1;
            break;
        }
        i++;
    }
    return ret;
}

