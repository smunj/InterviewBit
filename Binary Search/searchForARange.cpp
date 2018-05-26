vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 
    vector<int>v;
    int a = 0;
    int b = A.size() - 1;
    int mid;
    int ret = -1;
    while(a <= b){
        mid = a + (b - a) / 2;
        if(A[mid] == B){
            ret = mid;
            b = mid - 1;
        }
        else if(A[mid] > B){
            b = mid - 1;
        }
        else{
            a = mid + 1;
        }
    }
    v.push_back(ret);
    if(ret == -1){
        v.push_back(-1);
        return v;
    }
    a = 0;
    b = A.size() - 1;
    ret = -1;
    while(a <= b){
        mid = a + (b - a) / 2;
        if(A[mid] == B){
            ret = mid;
            a = mid + 1;
        }
        else if(A[mid] > B){
            b = mid - 1;
        }
        else{
            a = mid + 1;
        }
    }
    v.push_back(ret);
    return v;
}
