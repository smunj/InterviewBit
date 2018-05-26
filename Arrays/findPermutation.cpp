vector<int> Solution::findPerm(const string A, int B) {
    vector<int>v;
    int i = 1;
    int j = B;
    for(int k = 0; k < A.size(); k++){
        if(A[k] == 'I'){
            v.push_back(i++);
        }
        else{
            v.push_back(j--);
        }
    }
    if(A[A.size()-1] == 'I'){
        v.push_back(i);
    }
    else{
        v.push_back(j);
    }
    return v;
}

