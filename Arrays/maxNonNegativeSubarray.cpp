vector<int> Solution::maxset(vector<int> &A) {
    long int summ = 0;
    int l = 0;
    int si = -1;
    int sif = -1;
    int fi = -1;
    int fif = -1;
    long int maxsum = -1;
    int lf = 0;
    //vector<pair<int, pair<int, int> > >v;
    for(int i = 0; i < A.size(); i++){
        if(A[i] < 0){
            if(l > 0){
                if(summ > maxsum){
                    maxsum = summ;
                    sif = si;
                    fif = i-1;
                    lf = l;
                }
                else if(summ == maxsum){
                    if(l > lf){
                        sif = si;
                        fif = i-1;
                        lf = l;
                    }
                }
            }
            l = 0;
            summ = 0;
            si = -1;
        }
        else{
            if(si == -1){
                si = i;
            }
            l++;
            summ += A[i];
        }
    }
    if(l > 0){
        if(summ > maxsum){
            maxsum = summ;
            sif = si;
            fif = A.size()-1;
            lf = l;
        }
        else if(summ == maxsum){
            if(l > lf){
                sif = si;
                fif = A.size()-1;
                lf = l;
            }
        }
    }
    //cout << maxsum << " " << sif << " " << fif << " " << lf << endl;
    vector<int> v;
    if(sif == -1 && fif == -1)
        return v;
    for(int i = sif; i <= fif; i++){
        v.push_back(A[i]);
    }
    return v;
}

