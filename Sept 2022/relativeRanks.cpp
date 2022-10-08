class Solution {
public:
    
    int binarySearch(vector<int> v, int tar){
        int l=0,r=v.size()-1;
        while(l<=r){
            int mid = (r+l)/2;
            if(v[mid]==tar) {
                return mid;
            }
            else if(tar > v[mid]) {
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return -1;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq;
        for(int i=0;i<score.size();i++){
            pq.push(score[i]);
        }
        vector<int> sol;
        while(!pq.empty()){
            sol.push_back(pq.top());
            pq.pop();
        }
        vector<string> ans;
        for(int i=0;i<score.size();i++){
            int target = score[i];
            int idx;
            idx = binarySearch(sol,target);
            if(idx == 0){
                ans.push_back("Gold Medal");
            }
           else if(idx == 1){
                ans.push_back("Silver Medal");
            }
            else if(idx == 2){
                ans.push_back("Bronze Medal");
            }
            else{
                ans.push_back(to_string(idx+1));
            }
        }
        return ans;
        
    }
};