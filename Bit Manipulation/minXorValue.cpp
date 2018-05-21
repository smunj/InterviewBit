int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    // for(int i = 0; i < A.size(); i++){
    //     cout << A[i] << " ";
    // }
    // cout << endl;
    int mini = INT_MAX;
    for(int i = 0; i < A.size()-1; i++){
        if((A[i] ^ A[i+1]) < mini){
            mini = A[i] ^ A[i+1];
        }
    }
    return mini;
}

