class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=0,j=0;
        if (word1.size() == 0)
        {
            return word2;
        }
        else if(word2.size() == 0){
            return word1;
        }
        else{
            while(i != word1.size() && j != word2.size()){
                ans+=word1[i++];
                ans+=word2[j++];
                cout<<ans<<endl;
            }
            while(i != word1.size()) {
                ans+=word1[i++];
                cout<<ans<<endl;
            }
            while(j != word2.size()){
                ans += word2[j++];
                cout<<ans<<endl;
            }
        }
        return ans;
    }
};