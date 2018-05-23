int Solution::atoi(const string A) {
    long long ret = 0;
    int sign = 1;
    int i = 0;
    
    if(A[0] == '-'){
        sign = -1;
        i = 1;
    }
    
    if(A[0] == '+'){
        sign = 1;
        i = 1;
    }
    
    for(; A[i] != '\0'; i++){
        if(A[i] < '0' || A[i] > '9'){
            return sign * ret;
        }
        ret = ret * 10 + (A[i] - '0');
        if((sign == 1) && (ret >= 2147483647)){
            return sign * 2147483647;
        }
        if((sign == -1) && (ret >= 2147483648)){
            return sign * 2147483648;
        }
    }
    return ret * sign;
}

