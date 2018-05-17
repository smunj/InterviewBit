vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> >v;
    int s = A.size();
    v.resize(2*s-1);
    // j = 0;
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            v[i+j].push_back(A[i][j]);
        }
    }
    return v;
}

