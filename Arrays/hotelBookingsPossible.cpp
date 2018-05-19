bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    int a = 0;
    int d = 0;
    while(a < arrive.size()){
        a++;
        K--;
        if(K == 0){
            if(arrive[a] >= depart[d]){
                d++;
                K++;
            }
        }
        if(K < 0){
            return false;
        }
    }
    return true;
}

