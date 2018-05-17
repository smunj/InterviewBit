vector<vector<int> > Solution::generateMatrix(int A){
    vector<vector<int> >v;
    v.resize(A);
    for(int i = 0; i < A; i++)
        v[i].resize(A);
    for(int i = 0; i < A; i++){
        for(int j = 0; j < A; j++){
            v[i][j] = 0;
        }
    }
    int r = 0, c = 0, dir = 0, n = 1;
    v[0][0] = n;
    n++;
    while(n<=A*A){
        if(dir == 0){
	    c++;
            while(c < A && v[r][c] == 0){
                v[r][c] = n;
                n++;
                c++;
            }
            c--;
            dir = 1;
        }
        if(dir == 1){
	    r++;
            while(r < A && v[r][c] == 0){
                v[r][c] = n;
                n++;
                r++;
            }
            r--;
            dir = 2;
        }
        if(dir == 2){
	    c--;
            while(c >= 0 && v[r][c] == 0){
                v[r][c] = n;
                n++;
                c--;
            }
            c++;
            dir = 3;
        }
        if(dir == 3){
	    r--;
            while(r >= 0 && v[r][c] == 0){
                v[r][c] = n;
                n++;
                r--;
            }
            r++;
            dir = 0;
        }
    }
    return v;
}


