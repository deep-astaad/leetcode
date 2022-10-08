vector<int> productExceptSelf(vector<int>& nums) {
        long long int mul=1;
        int zcount = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zcount++;
            else{
                mul*=nums[i];
            }
        }
        vector<int> answer(nums.size(),0);
        if(zcount>=2){
            return answer;
        }
        else if(zcount==1){
            for(int i=0;i<nums.size();i++){
                    if(nums[i]==0){
                        answer[i]=mul;
                    }
                    else{
                        answer[i]=0;
                    }
             }
             return answer;
        }
        else{
             for(int i=0;i<nums.size();i++){
                    answer[i]=mul/nums[i];
             }
             return answer;
        }
       
    }