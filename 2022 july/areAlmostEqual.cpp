class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int k=-1,j=-1,count =0;
        for (int i = 0; i < s1.size(); ++i)
        {
            if (s1[i] != s2[i])
            {
                count++;
                if (count == 1)
                {
                    k = i;
                }
                else if(count ==2 ){
                    j = i;
                }
                else{
                    return false;
                }
            }
        }
        if(count == 0){
            return true;
        }
        if(count == 1){
            return false;
        }
        
        if ((s1[k] == s2[j]) && (s1[j] == s2[k]))
        {
            return true;
        }
        else{
            return false;
        }
    }
};