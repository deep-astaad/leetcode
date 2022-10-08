int maxChunksToSorted(vector<int>& arr) {
        int range=arr.size();
        int flag=0;
        int ans=0;
        for(int i=arr.size()-1;i>=0;i--){
            if(flag==0 && arr[i]==i){
                ans++;
            }
            if(arr[i]!=i && arr[i]<range){
                flag=1;
                range=arr[i];
            }
            if(i==range){
                ans++;
                range = arr.size();
                flag=0;
            }
        }
        return ans;
    }