class Solution {
public:
    vector<int> majorityElement(vector<int>& nums,int k) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second > (nums.size()/k)) v.push_back(it.first);
        }
        return v;
    }
};
