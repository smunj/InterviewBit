vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int> >v;
    if(A.size() < 2){
        return v;
    }
    
    sort(A.begin(), A.end());
    
    int i = 0;
    while(i < A.size()-2){
        int j = i + 1;
        int k = A.size() - 1;
        while(j < k){
            int temp = A[i] + A[j] + A[k];
            if(temp == 0){
                vector<int>vv;
                vv.push_back(A[i]);
                vv.push_back(A[j]);
                vv.push_back(A[k]);
                v.push_back(vv);
                vv.erase(vv.begin(), vv.end());
                while(A[j] == A[j+1]){
                    j++;
                    if(j == k){
                        break;
                    }
                }
                j++;
            }
            else if(temp > 0){
                while(A[k] == A[k-1]){
                    k--;
                    if(k == j){
                        break;
                    }
                }
                k--;
            }
            else{
                while(A[j] == A[j+1]){
                    j++;
                    if(j == k){
                        break;
                    }
                }
                j++;
            }
        }
        while(A[i] == A[i+1]){
            i++;
            if(i == A.size() - 2){
                return v;
            }
        }
        i++;
    }
    return v;
}

