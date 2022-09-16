class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v(26);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']=i;
        }
        int range=0;
        int count=0;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            range = max(range,v[s[i]-'a']);
            count++;
            if(i==range){
                ans.push_back(count);
                count=0;
                range=0;
            }
            
        }
        return ans;
    }
};
