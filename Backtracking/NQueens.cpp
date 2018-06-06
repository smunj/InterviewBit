bool possible(vector<string> v, int r, int c){
    for(int i = 0; i < c; i++){
        if(v[r][i] == 'Q'){
            return false;
        }
    }
    
    for(int i = r; i >= 0; i--){
        for(int j = c; j >= 0; j--){
            if(j-i == c-r){
                if(v[i][j] == 'Q'){
                    return false;
                }
            }
        }
    }
    
    for(int i = r; i < v.size(); i++){
        for(int j = c; j >= 0; j--){
            if(j+i == c+r){
                if(v[i][j] == 'Q'){
                    return false;
                }
            }
        }
    }
    
    return true;
}

void fn(vector<vector<string> >& ans, int k, int A, vector<string> v){
    if(k == A){
        ans.push_back(v);
        return;
    }
    
    for(int i = 0; i < A; i++){
        if(possible(v, i, k)){
            vector<string> vv(v);
            vv[i][k] = 'Q';
            fn(ans, k+1, A, vv);
        }
    }
}

vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<string> > ans;
    vector<string> v;
    for(int i = 0; i < A; i++){
        string s;
        for(int j = 0; j < A; j++){
            s.push_back('.');
        }
        v.push_back(s);
    }
    
    fn(ans, 0, A, v);
    
    return ans;
    
}

