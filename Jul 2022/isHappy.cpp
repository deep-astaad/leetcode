class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> s;
        
        int t = n;
        
        
        while(s.find(n) == s.end() && n != 1){
            vector<int> v;
            s.insert(n);
            while(n!=0){
                v.push_back(n%10);
                n = n/10;
            }
            for (int i = 0; i < v.size(); ++i)
            {
                n += v[i] * v[i];
            }
        }
        if(n==1){
            return true;
        }
        
        return false;
    }
};