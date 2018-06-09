vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> ret;
    
    if(B > A.size()){
        return ret;
    }
    
    map<int, int> m;
    int ans = 0;
    
    map<int, int>::iterator it;
    for(int i = 0; i < B; i++){
        if(m.find(A[i]) == m.end()){
            m[A[i]] = 1;
            ans++;
        }
        else{
            m[A[i]]++;
        }
    }
    ret.push_back(ans);
    
    for(int i = B; i < A.size(); i++){
        if((m.find(A[i-B]))->second == 1){
            ans--;
            m.erase(m.find(A[i-B]));
        }
        else{
            (m.find(A[i-B]))->second--;
        }
        if(m.find(A[i]) == m.end()){
            m[A[i]] = 1;
            ans++;
        }
        else{
            m[A[i]]++;
        }
        ret.push_back(ans);
    }
    return ret;
}

