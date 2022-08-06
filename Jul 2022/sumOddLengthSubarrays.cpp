class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < arr.size(); ++i)
        {
            sum += arr[i]*(((n-i)*(i+1)/2) + ((n-i)*(i+1)%2));
        }
        return sum;
    }
};