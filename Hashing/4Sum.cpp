vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<vector<int> > ans;
    unordered_map<int, vector<pair<int, int> > > map;
    
    for(int i = 0; i < A.size(); i++){
        for(int j = i + 1; j < A.size(); j++){
            map[A[i] + A[j]].push_back(make_pair(i, j));
        }
    }
    
    for(int i = 0; i < A.size(); i++){
        for(int j = i + 1; j < A.size(); j++){
            if(map.find(B - A[i] - A[j]) != map.end()){
                vector<pair<int, int> > p = map[B - A[i] - A[j]];
                for(int k = 0; k < p.size(); k++){
                    if(p[k].first != i && p[k].first != j && p[k].second != i && p[k].second != j){
                        vector<int> ret;
                        ret.push_back(A[p[k].first]);
                        ret.push_back(A[p[k].second]);
                        ret.push_back(A[i]);
                        ret.push_back(A[j]);
                        sort(ret.begin(), ret.end());
                        ans.push_back(ret);
                    }
                }
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    return ans;
}

