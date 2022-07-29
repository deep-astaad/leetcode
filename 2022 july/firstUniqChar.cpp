class Solution {
public:
    int firstUniqChar(string s) { // leetcode
        
        vector<int> str(26,0);
        for (int i = 0; i < s.size(); ++i)
        {
            str[s[i]-'a']++;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if (str[s[i]-'a'] == 1)
            {
                return i;
            }
        }
        return -1;

    }
};

// unordered_map<char,int> mp;
// for (auto i:s)
// {
//     mp[i]++;
// }

// for (auto it = mp.rbegin(); it != mp.rend(); it++)
// {
//     if (it.second == 1)
//     {
//         return mp[i];
//     }
// }
// for(auto i:mp)
// {
//     cout<<mp[i];
//     if(i.second==1){
//         return i.first;
//     }
// }