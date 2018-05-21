int Solution::uniquePaths(int A, int B) {
    vector<vector<int> >v;
    v.resize(A);
    for(int i = 0; i < A; i++){
        v[i].resize(B);
    }
    for(int i = 0; i < A; i++){
        v[i][0] = 1;
    }
    for(int i = 0; i < B; i++){
        v[0][i] = 1;
    }
    for(int i = 1; i < A; i++){
        for(int j = 1; j < B; j++){
            v[i][j] = v[i-1][j] + v[i][j-1];
        }
    }
    return v[A-1][B-1];
}

