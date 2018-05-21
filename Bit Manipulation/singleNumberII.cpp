int Solution::singleNumber(const vector<int> &A) {
    vector<int> v(31, 0);
    long int count, temp;
    long int n = 0;
    for(int i = 0; i < 31; i++){
        count = 0;
        for(int j = 0; j < A.size(); j++){
            temp = A[j] & (1 << i);
            if(temp)
                count += 1;
        }
        if(i == 0 && count % 3 != 0){
            n += 1;
        }
        else if(count % 3 != 0){
            n += (2<<(i-1));
        }
    }
    cout << n << endl;
}
