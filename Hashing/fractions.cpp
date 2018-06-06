string Solution::fractionToDecimal(int A, int B) {
    string ans;
    bool neg = false;
    
    unordered_map<int, int> map;
    
    long long int AA = A;
    long long int BB = B;
    
    if(AA < 0){
        AA = -1 * AA;
        neg = true;
    }
    
    if(BB < 0){
        if(neg){
            neg = false;
        }
        else{
            neg = true;
        }
        BB = -1 * BB;
    }
    
    if(AA == 0){
        return "0";
    }
    
    if(neg){
        ans = ans + "-";
    }
    
    long long int n = AA / BB;
    ans = ans + to_string(n);
    
    bool rep = false;
    long long int num = AA % BB;
    if(num == 0){
        return ans;
    }
    ans = ans + ".";
    int init;
    while(num && rep == false){
        num *= 10;
        if(map.find(num) != map.end()){
            rep = true;
            init = map[num];
            break;
        }
        else{
            map[num] = ans.size();
        }
        int temp = num / BB;
        ans = ans + to_string(temp);
        num = num % BB;
    }
    
    if(rep){
        ans = ans + ")";
        ans.insert(init, "(");
    }
    return ans;
    
}

