class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int> v;
        while(l<=r){
            if(abs(nums[l]) > abs(nums[r])){
                v.push_back(nums[l]*nums[l]);
                l += 1;
            }
            else{
                 v.push_back(nums[r]*nums[r]);
                 r -= 1;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

  // vector<int> sortedSquares(vector<int>& nums) {
  //       priority_queue<int> pq;
  //       vector<int> v;
  //       for(int i=0;i<nums.size();i++){
  //           pq.push(nums[i]*nums[i]);
  //       }
  //       while(pq.empty()==false){
  //           v.push_back(pq.top());
  //           pq.pop();
  //       }
  //       reverse(v.begin(),v.end());
  //       return v;
  //   }