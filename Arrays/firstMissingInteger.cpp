void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int j = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] <= 0){
            swap(&A[i], &A[j]);
            j++;
        }
    }
    
    for(int i = j; i < A.size(); i++){
        if(abs(A[i]) + j <= A.size()){
            if(A[abs(A[i]) + j - 1] > 0){
                A[abs(A[i]) + j - 1] = -1 * A[abs(A[i]) + j - 1];
            }
        }
    }
    

    for(int i = j; i < A.size(); i++){
        if(A[i] > 0){
            return i - j + 1;
        }
    }
    return A.size() - j + 1;
}

