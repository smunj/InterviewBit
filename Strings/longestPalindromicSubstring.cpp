//
#include<bits/stdc++.h>

using namespace std;

int main() {
    string A;
    cin >> A;
    int l = A.size();
    bool mat[l][l];
    int ans = 1;
    int index = 0;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            if(i == j){
                mat[i][j] = true;
            }
            else{
                mat[i][j] = false;
            }
        }
    }
    
    for(int i = 0; i < l-1; i++){
        if(A[i] == A[i+1]){
            mat[i][i+1] = true;
            if(ans == 1){
                index = i;
            }
            ans = 2;
        }
    }
    
    for(int i = 3; i <= l; i++){
        cout << i << endl;
        for(int j = 0; j < l - i + 1; j++){
            int k = i + j - 1;
            if(mat[j+1][k-1] && A[k] == A[j]){
                cout << j << " " << k << endl;
                mat[j][k] = true;
                if(ans < i){
                    index = j;
                    ans = i;
                }
            }
        }
    }
    
    cout << ans << " " << index << endl;
}
