int Solution::diffPossible(vector<int> &A, int B) {
    int n = A.size();
    for(int i = n-1; i > 0; i--){
        int j = 0;
        while(j < i){
            if(A[i] - A[j] == B){
                return 1;
            }
            else if(A[i] - A[j] > B){
                j++;
            }
            else{
                break;
            }
        }
    }
    return 0;
}

