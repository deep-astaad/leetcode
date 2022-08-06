class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i=0,j=0;
        while(i != n){
            while(j != m){
                if(matrix[i][j] == target){
                    return true;
                }
                if(matrix[i][j] > target){
                    return false;
                }
                j++;
            }
            if(j==m){
                j=0;
            }
            i++;
        }
        return false;
    }
};