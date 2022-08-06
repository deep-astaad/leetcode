class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for (int i = s.size()-1; i > = 0;)
        {
            if (s[i] == '#')
            {
                int res = (s[i-1] - '0') + 10*(s[i-2] -'0');
                ans += 'a' + res - 1;
                i -= 3;
            }
            else{
                ans += 'a' + (s[i] - '0') - 1;
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
    }
};