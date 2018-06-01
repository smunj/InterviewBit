void fn(vector<int>& A, vector<int> v, int n, vector<vector<int> >& vv){
    int s = A.size();
    vv.push_back(v);
    if(n == s){
        return;
    }
    for(int i = n; i < s; i++){
        vector<int> temp(v);
        temp.push_back(A[i]);
        fn(A, temp, i+1, vv);
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int> >vv;
    vector<int>v;
    if(A.size()){
        sort(A.begin(), A.end());
    }
    fn(A, v, 0, vv);
    return vv;
}

