#include<bits/stdc++.h>

using namespace std;

void cir(vector<vector<int> >&v){
	int m = v.size();
	int n = v[0].size();
	int t = 0, b = m-1, l = 0, r = n-1, dir = 0;
	while(t<=b && l<=r){
		if(dir == 0){
			for(int i = l; i<=r; i++){
				cout << v[t][i] << " ";
			}
			t++;
			dir = 1;
		}
		else if(dir == 1){
			for(int i = t; i <= b; i++){
				cout << v[i][r] << " ";
			}
			r--;
			dir = 2;
		}
		else if(dir == 2){
			for(int i = r; i>=l; i--){
				cout << v[b][i] << " ";
			}
			b--;
			dir = 3;
		}
		else if(dir == 3){
			for(int i = b; i >= t; i--){
				cout << v[i][l] << " ";
			}
			l++;
			dir = 0;
		}
	}
}

int main(){
	vector<vector<int> > v(2, vector<int>(3));
	v[0][0] = 5;
	v[0][1] = 7;
	v[0][2] = 6;
	v[1][0] = 1;
	v[1][1] = 5;
	v[1][2] = 6;
	cir(v);
}