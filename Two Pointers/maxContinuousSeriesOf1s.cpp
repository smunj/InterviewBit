vector<int> Solution::maxone(vector<int> &A, int B) {
    vector<int>v;
    int L = 0, R = 0, LL = 0, ret = 0;
    int count = 0;
    while(R < A.size()){
        if(count <= B){
            if(A[R] == 0){
                count++;
            }
            R++;
        }
        if(count > B){
            if(A[L] == 0){
                count--;
            }
            L++;
        }
        if(R-L > ret){
            ret = R - L;
            LL = L;
        }
    }
    for(int i = 0; i < ret; i++){
        v.push_back(LL+i);
    }
    return v;
}

