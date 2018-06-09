// #define mod 1e9+7

int Solution::nchoc(int A, vector<int> &B) {
    int mod = 1e9 + 7;
    priority_queue<int> q;
    if(B.size() == 0){
        return 0;
    }
    for(int i = 0; i < B.size(); i++){
        q.push(B[i]);
    }
    int ret = 0;
    while(A--){
        int t = q.top();
        q.pop();
        ret = (ret + (t % mod)) % mod;
        q.push(t/2);
    }
    return ret;
}

