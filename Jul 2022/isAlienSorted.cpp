class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<int,char> mp;
        for (int i = 0; i < order.size(); ++i)
        {
            mp[order[i]] = i;
        }
        for (int i = 0; i < words.size()-1; ++i)
        {
            string a = words[i];
            string b = words[i+1];
            for(int j=0; j<a.size(); j++){
                if (j == b.size())
                {
                    return false;
                }
                if(mp[a[j]] > mp[b[j]]){
                    return false;
                }
                if(mp[a[j]] < mp[b[j]]){
                    break;
                }

            }
        }
         return true;
    }
};