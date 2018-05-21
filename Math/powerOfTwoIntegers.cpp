int Solution::isPower(int A) {
    if(A == 1){
        return 1;
    }
    for(int i = 2; i <= sqrt(A); i++){
        int p = i;
        while(p <= A){
            p = p * i;
            if(p == A){
                return 1;
            }
        }
    }
    return 0;
}

