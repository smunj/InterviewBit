int Solution::isValidSudoku(const vector<string> &A) {
    unordered_map<int, vector<int> > rows;
    unordered_map<int, vector<int> > cols;
    unordered_map<int, vector<int> > blocks;
    
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[i].size(); j++){
            int r = i;
            int c = j;
            int b = 3 * (r/3) + (c/3);
            if(A[i][j] != '.'){
                int temp = (int)A[i][j];
                for(int k = 0; k < rows[r].size(); k++){
                    if(rows[r][k] == temp){
                        return 0;
                    }
                }
                rows[r].push_back(temp);
                for(int k = 0; k < cols[c].size(); k++){
                    if(cols[c][k] == temp){
                        return 0;
                    }
                }
                cols[c].push_back(temp);
                for(int k = 0; k < blocks[b].size(); k++){
                    if(blocks[b][k] == temp){
                        return 0;
                    }
                }
                blocks[b].push_back(temp);
            }
        }
    }
    return 1;
}

