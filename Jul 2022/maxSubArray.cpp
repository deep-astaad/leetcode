class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maximum = INT_MIN;
        int curr = 0;
        for(int i=0;i<nums.size();i++){
            curr += nums[i];
            maximum = max(maximum,curr);
            if(curr < 0){
                curr=0;
            }
        }
        return maximum;
    }
};