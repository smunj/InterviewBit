#define mod 1000000007

int Solution::cntBits(vector<int> &A) {
    long long ans = 0;
    int count;

    for(int i = 0; i < 31; i++){
        count = 0;
        for(int j = 0; j < A.size(); j++){
            if(A[j] & (1 << i)){
                count++;
            }
        }
        ans += 2 * count * (A.size() - count);
    }
    return int(ans % mod);
}

