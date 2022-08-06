vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size()-1; i >= 0; --i)
    {
        if (digits[i] != 9)
        {
            digits[i] += 1;
            return digits;
        }
        else if(i == 0 && digits[i] == 9){
            digits[i] = 0;
            vector<int> v;
            v.push_back(1);
            for(int j=0; j<digits.size(); j++){
                
            }
            return digits;
        }
        else{
            digits[i] = 0;
        }
    }
    return digits;
}
