int setBits(int n){
        int count=0;
        while(n){
            if(n&1) count++;
            n=n>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(setBits(i));
        }
        return v;
    }