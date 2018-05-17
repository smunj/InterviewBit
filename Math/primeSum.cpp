vector<int> Solution::primesum(int A) {
    vector<bool> soe(A+1, true);
    vector<int> v;
    for(int i = 2; i < sqrt(A) + 1; i++){
        if(soe[i] == true){
            for(int j = i*i; j <= A; j+=i){
                soe[j] = false;
            }
        }
    }
    for(int i = 2; i < A; i++){
        if(soe[i] == true){
            if(soe[A-i] == true){
                v.push_back(i);
                v.push_back(A-i);
                return v;
            }
        }
    }
    return v;
}

