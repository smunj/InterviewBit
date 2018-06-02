void fn(string s, int A, int a, int b, vector<string>& ans){
    if(b == A){
        ans.push_back(s);
    }
    else{
        string temp;
        temp.append(s);
        if(a > b){
            temp.push_back(')');
            fn(temp, A, a, b+1, ans);
        }
        string tempp;
        tempp.append(s);
        if(a < A){
            tempp.push_back('(');
            fn(tempp, A, a+1, b, ans);
        }
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    if(A == 0){
        return ans;    
    }
    string s;
    fn(s, A, 0, 0, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

