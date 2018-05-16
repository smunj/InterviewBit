#include<bits/stdc++.h>

using namespace std;

int fn(vector<int> &A){
	int max1 = -9999999999, max2 = -9999999999, min1 = 9999999999, min2 = 9999999999;
    for (int i = 0; i < A.size(); i++) {
        max1 = max(max1, A[i] + i);
        min1 = min(min1, A[i] + i);
        max2 = max(max2, A[i] - i);
        min2 = min(min2, A[i] - i);
    }
    // cout << max1 << " " << max2 << 
 
    return max(max1 - min1, max2 - min2);
}

int main(){
	vector<int> v;
	for(int i = 0; i < 5; i++)
		v.push_back(-1000000000);
	cout << fn(v) <<  endl;
}