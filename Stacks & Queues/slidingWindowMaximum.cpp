vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int i = 0;
    deque<int> d;
    while(i < B){
        while(!d.empty() && A[i] > A[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        i++;
    }
    
    vector<int> ret;
    ret.push_back(A[d.front()]);
    
    while(i < A.size()){
        if(i - d.front() >= B){
            d.pop_front();
        }
        while(!d.empty() && A[i] > A[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        i++;
        ret.push_back(A[d.front()]);
    }
    return ret;
}

