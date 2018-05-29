int Solution::largestRectangleArea(vector<int> &A) {
    stack<int> s;
    int ret = 0;
    int top;
    
    int i = 0;
    while(i < A.size()){
        if(s.empty() || A[i] >= A[s.top()]){
            s.push(i);
            i++;
        }
        else{
            top = s.top();
            s.pop();
            int temp = A[top] * (s.empty() ? i : i - s.top() - 1);
            if(temp > ret){
                ret = temp;
            }
        }
    }
    while(!s.empty()){
        top = s.top();
        s.pop();
        int temp = A[top] * (s.empty() ? i : i - s.top() - 1);
        if(temp > ret){
            ret = temp;
        }
    }
    return ret;
}

