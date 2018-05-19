vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    for(int i = 0; i < A.size(); i+=2){
        if(i+1 < A.size()){
            int temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }
    return A;
}

