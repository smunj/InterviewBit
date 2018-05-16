vector<int> Solution::flip(string A) {
    vector<int> cc(A.size());
    vector<int> ret;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == '0')
            cc[i] = 1;
        else
            cc[i] = -1;
    }
    
    int cum = 0, l = 0;
    int la = 0, ra = 0;
    int ans = INT_MIN;
    
    for(int i = 0; i < A.size(); i++){
        cum += cc[i];
        if(cum < 0){
            cum = 0;
            l = i + 1;
        }
        else if(cum > ans){
            ans = cum;
            la = l;
            ra = i;
        }
    }
    
    if(ans <= 0)
        return ret;
    else{
        ret.push_back(la+1);
        ret.push_back(ra+1);
        return ret;
    }
}
