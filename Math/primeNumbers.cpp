vector<int> Solution::sieve(int A) {
    vector<int>v;
    bool primes[A+1];
    for(int i = 0; i < A + 1; i++){
        primes[i] = true;
    }
    for(int p = 2; p * p <= A; p++){
        if(primes[p]){
            for(int i = p * p; i <= A; i += p){
                primes[i] = false;
            }
        }
    }
    for(int i = 2; i <= A; i++){
        if(primes[i]){
            v.push_back(i);
        }
    }
    return v;
}

