void fn(vector<int> v, int curr, int A, int B, vector<vector<int> >&vv){
    if(v.size() == B){
        vv.push_back(v);
        return;
    }
    if(curr > A){
        return;
    }
    for(int i = curr; i <= A; i++){
        vector<int> temp(v);
        temp.push_back(i);
        fn(temp, i+1, A, B, vv);
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int> >vv;
    for(int i = 1; i <= A-B+1; i++){
        vector<int> v(1, i);
        fn(v, i+1, A, B, vv);
    }
    return vv;
}

