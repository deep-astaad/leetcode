class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int> v(nums.size());
        int zero = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                zero++;
                nums.erase(nums.begin()+i);
            }
            
        }
        for (int i = 0; i < zero; ++i)
        {
            nums.push_back(0);
        }
        return v;
    }
};