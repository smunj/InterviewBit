vector<int> Solution::equal(vector<int> &A) {
    unordered_map<int, vector<int> > map;
    vector<vector<int> > v;
    vector<int> ans;
    bool flag;
    
    for(int i = 0; i < A.size(); i++){
        for(int j = i + 1; j < A.size(); j++){
            flag = true;
            if(map[A[i] + A[j]].size() < 4){
                for(int k = 0; k < map[A[i] + A[j]].size(); k++){
                    if(map[A[i] + A[j]][k] == i || map[A[i] + A[j]][k] == j){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    map[A[i] + A[j]].push_back(i);
                    map[A[i] + A[j]].push_back(j);
                }
            }
        }
    }
    
    unordered_map<int, vector<int> >:: iterator it;
    for(it = map.begin(); it != map.end(); it++){
        vector<int> temp = it->second;
        if(temp.size() > 3){
            v.push_back(temp);
        }
    }
    
    if(v.size() == 0){
        return ans;
    }
    else{
        sort(v.begin(), v.end());
        return v[0];
    }
}
