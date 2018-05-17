vector<vector<int> > Solution::generate(int A) {
    vector<vector<int> >v;
    v.resize(A);
    for(int i = 0; i < A; i++){
        v[i].resize(i+1);
        if(i==0)
            v[i][0] = 1;
        if(i==1){
            v[i][0] = 1;
            v[i][1] = 1;
        }
        if(i>1){
            v[i][0] = 1;
            v[i][v[i].size()-1] = 1;
            for(int j=1; j < i; j++){
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
    return v;
}

