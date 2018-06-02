bool pal(string s, int a, int b){
    while(a < b){
        if(s[a] != s[b]){
            return false;
        }
        a++;
        b--;
    }
    return true;
}

void fn(vector<vector<string> >& ans, vector<string> v, int i, int n, string A){
    if(i == n){
        ans.push_back(v);
        return;
    }
    
    for(int k = i; k < n; k++){
        if(pal(A, i, k)){
            vector<string> temp(v);
            temp.push_back(A.substr(i, k - i + 1));
            fn(ans, temp, k+1, n, A);
        }
    }
}

vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    vector<vector<string> > ans;
    vector<string> v;
    fn(ans, v, 0, n, A);
    return ans;
}

