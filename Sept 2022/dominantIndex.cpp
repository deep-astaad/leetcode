 int dominantIndex(vector<int>& nums) {
        int idx1,idx2;
        if(nums[0]>nums[1]){
            idx1=0;
            idx2=1;
        }
        else{
            idx1=1;
            idx2=0;
        }
        for(int i=2;i<nums.size();i++){
            if(nums[i]>nums[idx1]){
                idx2=idx1;
                idx1=i;
            }
            else if(nums[idx2]<nums[i]){
                idx2=i;
            }
        }
        cout<<nums[idx1]<<" "<<nums[idx2]<<endl;
        if(nums[idx1]>=2*nums[idx2]){
            return idx1;
        }
        return -1;
    }