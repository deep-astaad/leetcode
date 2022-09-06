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

// void rotate(vector<int>& nums, int k) {
    //     k = k % nums.size();
    //     if(k==0) return;
    //     int t = nums[nums.size()-1]; //t=7
    //     for(int i=nums.size()-1;i>0;i--){
    //         nums[i]=nums[i-1];
    //     }
    //     nums[0] = t;
    //     rotate(nums,--k);
// }
