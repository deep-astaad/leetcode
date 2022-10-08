vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int low=0,high=nums.size()-1,f,s;
        vector<pair<int, int>> mp;
        for(int i=0;i<nums.size();i++){
            mp.push_back({nums[i],i});
        }
        int flag=0;
        sort(nums.begin(),nums.end());
        while(low < high){
            if(nums[low] + nums[high] < target) low++;
            else if(nums[low] + nums[high] > target) high--;
            else {
                f = nums[low];
                s = nums[high];
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return v;
        }
        for(int i = 0; i<mp.size();i++){
             if(mp[i].first == f) v.push_back(mp[i].second);
            else if(mp[i].first == s) v.push_back(mp[i].second);
        }
        return v;
    }