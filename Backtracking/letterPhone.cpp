string mapping(char A){
    if(A == '1'){
        return "1";
    }
    if(A == '2'){
        return "abc";
    }
    if(A == '3'){
        return "def";
    }
    if(A == '4'){
        return "ghi";
    }
    if(A == '5'){
        return "jkl";
    }
    if(A == '6'){
        return "mno";
    }
    if(A == '7'){
        return "pqrs";
    }
    if(A == '8'){
        return "tuv";
    }
    if(A == '9'){
        return "wxyz";
    }
    if(A == '0'){
        return "0";
    }
}

void fn(string A, vector<string> v, vector<string>& ans, string s, int i){
    if(i == A.size()){
        ans.push_back(s);
        return;
    }
    for(int k = 0; k < v[i].size(); k++){
        string ss = s;
        ss.push_back(v[i][k]);
        fn(A, v, ans, ss, i+1);
    }
}

vector<string> Solution::letterCombinations(string A) {
    vector<string> ans;
    vector<string> v;
    for(int i = 0; i < A.size(); i++){
        v.push_back(mapping(A[i]));
    }
    fn(A, v, ans, "", 0);
    sort(ans.begin(), ans.end());
    return ans;
}

