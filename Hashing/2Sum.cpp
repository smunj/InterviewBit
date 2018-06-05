vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> ans;
    unordered_map<int, int> map;
    for(int i = 0; i < A.size(); i++){
        if(map.find(B - A[i]) == map.end()){
            map.insert(make_pair(A[i], i + 1));
        }
        else{
            ans.push_back(map[B - A[i]]);
            ans.push_back(i + 1);
            return ans;
        }
    }
    return ans;
}

