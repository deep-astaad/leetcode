class Solution {
public:
    int fib(int n) {
        vector<long long> v;
        v.push_back(1);
        if(n==0){
            return 0;
        }
        if (n==1)
        {
            return v[v.size()-1];
        }
        v.push_back(1);
        for (int i = 1; i < n-1; ++i)
        {
            v.push_back(v[i]+v[i-1]);
        }
        return v[v.size()-1];
    }
    
};