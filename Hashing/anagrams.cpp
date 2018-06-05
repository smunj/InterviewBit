vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    vector<vector<int> > ans;
    unordered_map<string, vector<int> > map;
    
    for(int i = 0; i < A.size(); i++){
        string s = A[i];
        sort(s.begin(), s.end());
        map[s].push_back(i+1);
    }
    
    unordered_map<string, vector<int> >:: iterator it;
    for(it = map.begin(); it != map.end(); it++){
        ans.push_back(it->second);
    }
    
    return ans;
}

