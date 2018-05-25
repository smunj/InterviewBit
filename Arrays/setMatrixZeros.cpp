void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int r = 0;
    int c = 0;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i][0] == 0){
            c = 1;
        }
    }
    
    for(int i = 0; i < A[0].size(); i++){
        if(A[0][i] == 0){
            r = 1;
        }
    }
    
    for(int i = 1; i < A.size(); i++){
        for(int j = 1; j < A[0].size(); j++){
            if(A[i][j] == 0){
                A[i][0] = 0;
                A[0][j] = 0;
            }
        }
    }
    
    for(int i = 1; i < A.size(); i++){
        for(int j = 1; j < A[0].size(); j++){
            if(A[i][0] == 0 || A[0][j] == 0){
                A[i][j] = 0;
            }
        }
    }
    
    if(r){
        for(int i = 0; i < A[0].size(); i++){
            A[0][i] = 0;
        }
    }
    
    if(c){
        for(int i = 0; i < A.size(); i++){
            A[i][0] = 0;
        }
    }
}

