int Solution::findCount(const vector<int> &A, int B) {
    int f;
    int s;
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
    f = ret;
    if(ret == -1){
        return 0;
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
    s = ret;
    return s-f+1;
}

