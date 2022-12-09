class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int n = nums.size();
        int idx = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > nums[idx])
            {
                swap(nums[i], nums[idx]);
                break;
            }
        }
        reverse(nums.begin() + idx + 1, nums.end());
        return;
        // int n=nums.size();
        // vector<int> mxs(n);
        // int mx = INT_MIN;
        // for(int i=n-1;i>=0;i--){
        //     mx = max(mx,nums[i]);
        //     mxs[i]=mx;
        // }
        // int idx=-1;
        // for(int i=n-2;i>=0;i--){
        //     if(mxs[i]>nums[i]){
        //         idx=i;
        //         break;
        //     }
        // }
        // if(idx==-1){
        //     sort(nums.begin(),nums.end());
        //     return;
        // }
        // int mxidx=-1;
        // for(int i=idx+1;i<n;i++){
        //     if(nums[i]>nums[idx]){
        //         if(mxidx==-1){
        //             mxidx=i;
        //         }
        //         else if(nums[mxidx]>nums[i]){
        //             mxidx=i;
        //         }
        //     }
        // }
        // swap(nums[idx],nums[mxidx]);
        // sort(nums.begin()+idx+1,nums.end());
        // for(int i=n-1;i>0;i--){
        //     for(int j=i-1;j>=0;j--){
        //         if(nums[i]>nums[j]){
        //             cout<<"x"<<endl;
        //             swap(nums[i],nums[j]);
        //             sort(nums.begin()+j+1,nums.end());
        //             return;
        //         }
        //     }
        // }
        // cout<<"x"<<endl;
        // reverse(nums.begin(),nums.end());
        return;
    }
};