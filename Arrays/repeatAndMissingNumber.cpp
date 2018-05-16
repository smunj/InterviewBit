vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;
    long long int d = 0;
    
    for(long long int i = 0; i < A.size(); i++){
        a += (long long int)A[i];
        b += (long long int)A[i] * (long long int)A[i];
    }
    c = ((long long int)A.size()) * ((long long int)A.size()+1) / 2;
    d = ((long long int)A.size()) * ((long long int)A.size()+1) * (2*(long long int)A.size()+1) / 6;
    long long int diff1 = d - b;
    long long int diff2 = c - a;
    long long int divi = diff1 / diff2;
    long long ans1 = (divi + diff2) / 2;
    long long ans2 = ans1 - diff2;
    
    vector<int> v;
    v.push_back(int(ans2));
    v.push_back(int(ans1));
    return v;
}

