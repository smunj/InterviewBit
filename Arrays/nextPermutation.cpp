void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int j, index, temp, hee;
    bool flag = true;
    int l = -1;
    for(int i = A.size()-1; i > 0; i--){
        if(A[i] > A[i-1]){
            index = i;
            temp = A[i];
            hee = i;
            for(j = i; j < A.size(); j++){
                if(temp > A[j] && A[j] > A[i-1]){
                    temp = A[j];
                    hee = j;
                }
            }
            swap(A[i-1], A[hee]);
            sort(A.begin()+i, A.end());
            flag = false;
            break;
        }
    }
    
    
    if(flag == true){
        sort(A.begin(), A.end());
    }
}

