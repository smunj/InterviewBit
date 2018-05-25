int Solution::nTriang(vector<int> &A) {
    int n = A.size();
    long long mod = 1000000007;
    int count = 0;
    sort(A.begin(), A.end());
    for(int k = n-1; k >= 0; k--){
        int i = 0;
        int j = k-1;
        while(i < j){
            long long s = A[i] + A[j];
            long long t = A[k];
            if(s > t){
                count = (count + ((j-i) % mod)) % mod;
                j--;
            }
            else{
                i++;
            }
        }
    }
    return count;
}

