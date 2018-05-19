int Solution::maximumGap(const vector<int> &A) {
    vector<int> m(A.size());
    vector<int> M(A.size());
    
    m[0] = A[0];
    M[A.size()-1] = A[A.size()-1];
    
    for(int i = 1; i < A.size(); i++){
        m[i] = min(A[i], m[i-1]);
        M[A.size()-1-i] = max(A[A.size()-i-1], M[A.size()-i]);
    }
    
    int ans = 0;
    int a = 0; 
    int b = 0;
    
    while(a < A.size() && b < A.size()){
        if(m[a] <= M[b]){
            ans = max(ans, b-a);
            b += 1;
        }
        else{
            a += 1;
        }
    }
    return ans;
}

