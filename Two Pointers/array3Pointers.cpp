int maximum(int a, int b, int c){
    int maxi = a;
    if(b > maxi){
        maxi = b;
    }
    if(c > maxi){
        maxi = c;
    }
    return maxi;
}

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i = 0;
    int j = 0;
    int k = 0;
    int ret = INT_MAX;
    int temp1, temp2, temp3, temp;
    
    while(i < A.size() || j < B.size() || k < C.size()){
        ret = min(ret, maximum(abs(A[i]-B[j]), abs(A[i]-C[k]), abs(B[j]-C[k])));
        
        if(i+1<A.size()){
            temp1 = maximum(abs(A[i+1]-B[j]), abs(A[i+1]-C[k]), abs(B[j]-C[k]));
        }
        else{
            temp1 = INT_MAX;
        }
        
        if(j+1<B.size()){
            temp2 = maximum(abs(A[i]-B[j+1]), abs(A[i]-C[k]), abs(B[j+1]-C[k]));
        }
        else{
            temp2 = INT_MAX;
        }
        
        if(k+1<C.size()){
            temp3 = maximum(abs(A[i]-B[j]), abs(A[i]-C[k+1]), abs(B[j]-C[k+1]));
        }
        else{
            temp3 = INT_MAX;
        }
        
        temp = min(temp1, temp2);
        temp = min(temp, temp3);
        
        if(temp == INT_MAX){
            return ret;
        }
        else if(temp == temp1){
            i++;
        }
        else if(temp == temp2){
            j++;
        }
        else{
            k++;
        }
    }
    return ret;
}

