void swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void fn(vector<vector<int> >& ans, vector<int> A, int k){
    if(k == A.size()){
        ans.push_back(A);
        return;
    }
    
    for(int i = k; i < A.size(); i++){
        vector<int> temp(A);
        swap(temp[i], temp[k]);
        fn(ans, temp, k+1);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int> >ans;
    sort(A.begin(), A.end());
    fn(ans, A, 0);
    sort(ans.begin(), ans.end());
    return ans;
}

