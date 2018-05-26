int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int a = 0;
    int b = A.size() - 1;
    int mid;
    while(a <= b){
        if(a == b && A[a] == B){
            return a;
        }
        else if(a == b && A[a] < B){
            return a + 1;
        }
        else if(a == b && A[a] > B){
            return a;
        }
        mid = a + (b - a) / 2;
        if(A[mid] == B){
            return mid;
        }
        else if(A[mid] < B){
            a = mid + 1;
        }
        else{
            b = mid - 1;
        }
    }
}

