void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i = 0;
    int j = 0;
    vector<int> k(A.size() + B.size());
    while(i < A.size() && j < B.size()){
        k[i+j] = min(A[i], B[j]);
        if(A[i] < B[j]){
            i++;
        }
        else{
            j++;
        }
    }
    if(i == A.size() && j != B.size()){
        while(j < B.size()){
            k[i+j] = B[j];
            j++;
        }
    }
    if(i != A.size() && j == B.size()){
        while(i < A.size()){
            k[i+j] = A[i];
            i++;
        }
    }
    A.resize(k.size());
    for(int i = 0; i < k.size(); i++){
        A[i] = k[i];
    }
}

