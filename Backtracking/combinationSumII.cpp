void fn(vector<int> A, int B, vector<int> v, vector<vector<int> >& ans, int k){
    if(B == 0){
        ans.push_back(v);
        return;
    }
    if(B < 0){
        return;
    }
    if(B > 0){
        while(k < A.size() && B - A[k] >= 0){
            v.push_back(A[k]);
            fn(A, B - A[k], v, ans, k+1);
            k++;
            v.pop_back();
        }
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int> > ans;
    sort(A.begin(), A.end());
    vector<int> v;
    fn(A, B, v, ans, 0);
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

