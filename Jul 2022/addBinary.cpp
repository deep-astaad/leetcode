string addBinary(string a, string b) {
        int i=a.size()-1,j=b.size()-1;
        char carry = '0';
        string s = "";
        
        for (; i >= 0 && j >= 0; --i,j--)
        {
            if (carry == '1')
            {
                if (a[i]=='1' && b[j] =='1')
                {
                    s += '1';
                    carry = '1';
                }
                else if (a[i]=='1' || b[j] =='1')
                {
                    s+= '0';
                    carry = '1';
                }
                else{
                    s+= '1';
                    carry = '0';
                }
            }
            else{
                if (a[i]=='1' && b[j] =='1')
                {
                    s += '0';
                    carry = '1';
                }
                else if (a[i]=='1' || b[j] =='1')
                {
                    s+= '1';
                    carry = '0';
                }
                else{
                    s+= '0';
                    carry = '0';
                }
            }
            
        }
        while(i != -1) {
            if(carry == '1' && a[i] == '1'){
                s += '0';
                carry = '1';
            }
            else if(carry == '1' && a[i] == '0'){
                s += '1';
                carry = '0';
            }
            else{
                s  += a[i];
            }
            
            i--;
        }
        while(j != -1) {
            if(carry == '1' && b[j] == '1'){
                s += '0';
                carry = '1';
            }
            else if(carry == '1' && b[j] == '0'){
                s += '1';
                carry = '0';
            }
            else{
                s  += b[j];
            }
            
            j--;
        }
        if (carry == '1')
        {
            s += carry;
        }
        reverse(s.begin(),s.end());
        return s;
}
