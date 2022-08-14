class Solution
{
public:
    int countSubsetsWithSumTarget(vector<int> &a, int target)
    {
        int n = a.size(), w = target;
        int t[n + 1][w + 1];

        for (int i = 0; i < w + 1; i++)
        {
            t[0][i] = 0;
        }
        for (int j = 0; j < n + 1; j++)
        {
            t[j][0] = 1;
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < w + 1; j++)
            {
                if (a[i - 1] <= j)
                {
                    t[i][j] = t[i - 1][j - a[i - 1]] + t[i - 1][j];
                }
                else
                {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        return t[n][w];
    }

    int findTargetSumWays(vector<int> &nums, int target)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        if (sum < abs(target) || (target + sum) % 2 != 0)
        {
            return 0;
        }

        int newTarget = (sum - target) / 2;
        return countSubsetsWithSumTarget(nums, newTarget);
    }
};