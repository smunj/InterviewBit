void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int i = 0;
    int j = n-1;
    while(i < j){
        if(A[j] == 2){
            j--;
        }
        else if(A[i] == 2){
            swap(A[i], A[j]);
            i++;
            j--;
        }
        else{
            i++;
        }
    }
    int temp = -1;
    for(int p = 0; p < n; p++){
        if(A[p] == 2){
            temp = p;
            break;
        }
    }
    if(temp == -1){
        temp = n;
    }
    
    i = 0;
    j = temp - 1;
    while(i < j){
        if(A[j] == 1){
            j--;
        }
        else if(A[i] == 1){
            swap(A[i], A[j]);
            i++;
            j--;
        }
        else{
            i++;
        }
    }
}

