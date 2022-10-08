class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        for (int i = 0; i < nums.size(); ++i)
        {
            int flag = 0;
            for (int j = i+1; j < n; ++j)
            {
                if(nums[j]>nums[i]) {v[i]=nums[j]; flag=1; break;}
            }
            if(flag==0){
                for (int j = 0; j < i; ++j)
                {
                    if(nums[j]>nums[i]) {v[i]=nums[j]; flag=1; break;}
                }
            }
            if(flag == 0) v[i]=-1;
        }
        return v;
    }
};