vector<int> Solution::subUnsort(vector<int> &A) {
    int s = -1, e = -1, a = -1, b = -1, mini = INT_MAX, maxi = INT_MIN;
    
    for(int i = 0; i < A.size()-1; i++){
        if(A[i] > A[i+1]){
            s = i;
            break;
        }
    }
    
    for(int i = A.size()-1; i > 0; i--){
        if(A[i] < A[i-1]){
            e = i;
            break;
        }
    }
    
    for(int i = s; i <= e; i++){
        if(A[i] < mini)
            mini = A[i];
        if(A[i] > maxi)
            maxi = A[i];
    }
    
    for(int i = 0; i < s; i++){
        if(A[i] > mini){
            s = i;
            break;
        }
    }
    
    for(int i = A.size()-1; i > e; i--){
        if(A[i] < maxi){
            e = i;
            break;
        }
    }
    
    vector<int> vv;
    
    if(s == -1){
        vv.push_back(s);
    }
    else{
        vv.push_back(s);
        vv.push_back(e);
    }
    return vv;
}
