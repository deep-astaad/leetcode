bool comp(char x, char y){
       return x>y;
}
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        string t = s;
        sort(s.begin(),s.end(),comp);
        int idx=-1;
        for(int i=0;i<s.size();i++){
            if(t[i]!=s[i]){
                idx=i;
                break;
            }
        }
        if(idx==-1) return num;
        for(int i=t.size()-1;i>idx;i--){
            if(t[i]==s[idx]){
                swap(t[idx],t[i]);
                break;
            }
        }
        return stoi(t);
    }
};


