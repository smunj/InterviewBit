string Solution::reverseString(string A) {
    stack<char> s;
    for(int i = 0; i < A.size(); i++){
        s.push(A[i]);
    }
    string st;
    while(!s.empty()){
        st.push_back(s.top());
        s.pop();
    }
    return st;
}

