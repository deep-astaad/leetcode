#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    for (int i = 0; i < s.size(); ++i)
    {
        for(int j=0; j<t.size(); j++){
            if (s[i] == t[j])
            {
                t.erase()
            }
        }
    }
}
int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s,t);
    return 0;

}