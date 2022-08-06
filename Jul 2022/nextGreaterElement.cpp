class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for (int i = 0; i < nums1.size(); ++i)
        {
            int flag = 0;
            for(int j=0; j<nums2.size(); j++){
                if (flag == 1 && nums2[j]>nums1[i])
                {
                    v.push_back(nums2[j]);
                    break;
                }
                if (nums1[i] == nums2[j])
                {
                    flag = 1;
                }
            }
            if (v.size() != i+1)
            {
                v.push_back(-1);
            }
        }
        return v;
    }
};
// [4,1,2]
// [1,3,4,2]
// [-1,1,2,3,-1,-1]