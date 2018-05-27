bool fn(vector<int> A, int n, int m, int mid){
    int ret = 1;
    int curr = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > mid){
            return false;
        }
        if(curr + A[i] > mid){
            ret++;
            curr = A[i];
            if(ret > m){
                return false;
            }
        }
        else{
            curr += A[i];
        }
    }
    return true;
}

int Solution::books(vector<int> &A, int B) {
    int n = A.size();
    if(B > n){
        return -1;
    }
    int a = 0;
    int b = 0;
    for(int i = 0; i < n; i++){
        b += A[i];
    }
    int ans = INT_MAX;
    int mid;
    while(a <= b){
        mid = a + (b - a) / 2;
        if(fn(A, n, B, mid)){
            ans = min(mid, ans);
            b = mid - 1;
        }
        else{
            a = mid + 1;
        }
    }
    if(ans == INT_MAX){
        return -1;
    }
    return ans;
}

