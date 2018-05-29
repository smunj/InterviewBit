int Solution::braces(string A) {

    stack<char> s;
    bool flag;
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == ')'){
            char t = s.top();
            s.pop();
            flag = true;
            while(t != '('){
                if(t == '+' || t == '-' || t == '*' || t == '/'){
                    flag = false;
                }
                t = s.top();
                s.pop();
            }
            if(flag){
                return 1;
            }
        }
        else{
            s.push(A[i]);
        }
    }
    return 0;
}

