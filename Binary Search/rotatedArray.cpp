int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int a = 0;
    int b = A.size() - 1;
    int mid;
    int n = A.size();
    while(a <= b){
        mid = a + (b - a) / 2;
        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;
        if(A[a] <= A[b]){
            return A[a];
        }
        else if(A[mid] <= A[prev] && A[mid] <= A[next]){
            return A[mid];
        }
        else if(A[mid] <= A[b]){
            b = mid - 1;
        }
        else{
            a = mid + 1;
        }
    }
}

