int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A.size() == 0){
        return -1;
    }   
    if(A.size() == 1 || A.size() == 2){
        return A[0];
    }
    int a = A[0];
    int b = A[1];
    int ac = 0;
    int bc = 0;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == a){
            ac++;
        }
        else if(A[i] == b){
            bc++;
        }
        else if(ac == 0){
            a = A[i];
            ac = 1;
        }
        else if(bc == 0){
            b = A[i];
            bc = 1;
        }
        else{
            ac--;
            bc--;
        }
    }
    // cout << a << " " << b <<  endl;
    ac = 0;
    bc = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == a){
            ac++;
        }
        else if(A[i] == b){
            bc++;
        }
    }
    if(ac > A.size() / 3){
        return a;
    }
    else if(bc > A.size() / 3){
        return b;
    }
    else{
        return -1;
    }
}

