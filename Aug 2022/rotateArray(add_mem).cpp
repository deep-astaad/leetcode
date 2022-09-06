class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        k = (k)%nums.size();
        for(int i=nums.size()-k;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        for(int i=nums.size()-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        for(int i=0;i<v.size();i++){
            nums[i]=v[i];
        }
    }
};
