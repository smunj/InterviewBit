void fn(vector<int> A, vector<int> v, vector<vector<int> >& ans, int k){
    ans.push_back(v);
    if(k == A.size()){
        return;
    }
    for(int i = k; i < A.size(); i++){
        vector<int> temp(v);
        temp.push_back(A[i]);
        fn(A, temp, ans, i+1);
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<vector<int> > ans;
    vector<int> v;
    sort(A.begin(), A.end());
    fn(A, v, ans, 0);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

