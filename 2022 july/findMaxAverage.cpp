class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avg = 0;
        for (int i = 0; i < k; ++i)
        {
            avg += nums[i];
        }
        avg /= k;
        double ans = avg;
        for (int i = 1; i <= n-k; i++)
        {
            avg = avg - (nums[i-1]/double(k)) + (nums[i+k-1]/double(k));
            cout<<avg<<endl;
            if (avg > ans)
            {
                ans = avg;
            }
        }
        return ans;
    }
};