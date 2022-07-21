class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stck.push(s[i]);
            }
            if (s[i] == ')')
            {
                if(stck.empty() == true){
                    return false;
                }
                if ('(' == stck.top())
                {
                    stck.pop();
                }
                else{
                    return false;
                }
            }
            if (s[i] == '}')
            {
                if(stck.empty() == true){
                    return false;
                }
                if ('{' == stck.top())
                {
                    stck.pop();
                }
                else{
                    return false;
                }
            }
            if (s[i] == ']')
            {
                if(stck.empty() == true){
                    return false;
                }
                if ('[' == stck.top())
                {
                    stck.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(stck.empty() == true){
            return true;
        }
        else{
            return false;
        }
    }
};