class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int x = nums[size-1],y=nums[size-2],z=nums[size-3];
        int s = (x+y+z)/2;
        int i = size-4;
        while((s != x && s != y && s != z) && i >=0) {
            if (s == x)
            {
                for (; i >= 0; --i)
                {
                    x = nums[i];
                }
            }
            else if(s == y){
                for (; i >= 0; --i)
                {
                    y = nums[i];
                }
            }
            else{
                for (; i >= 0; --i)
                {
                    z = nums[i];
                }
            }
        }
        if (i == -1)
        {
            return -1;
        }
        else{
            return x+y+z;
        }
        
    }
};