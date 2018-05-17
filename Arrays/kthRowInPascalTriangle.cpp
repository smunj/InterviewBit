int ncr(int n, int r){
    if(r==0){
        return 1;
    }
    return ncr(n-1, r-1) * (n/r);
}

vector<int> Solution::getRow(int A) {
    vector<int> v(A+1);
    for(int i = 0; i <= A; i++){
        v[i] = ncr(A, i);
    }
    return v;
}

