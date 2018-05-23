//
int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int l = A.size();
    if(l < 3){
        return -1;
    }
    int temp;
    int ans = INT_MAX;
    int mini = INT_MAX;
    int ret;
    int i = 0;
    while(i < l - 2){
        int j = i + 1;
        int k = l - 1;
        while(k > j){
            temp = A[i] + A[j] + A[k];
            ret = abs(temp - B);
            if(ret == 0){
                return B;
            }
            if(ret < mini){
                mini = ret;
                ans = temp;
            }
            if(temp < B){
                j++;
            }
            else{
                k--;
            }
        }
        i++;
    }
    return ans;
}
