class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int x=0,y=0;

        if(mat.size() * mat[0].size() != r*c){
            return mat;
        }
        vector<vector<int>> v(r, vector<int> (c));
        for (int i = 0; i < mat.size(); ++i)
        {
            for(int j=0; j<mat[0].size(); j++){
                v[x][y] = mat[i][j];
                y++;
                if(y == c){
                    x++;
                    y=0;
                }
                
            }
        }
        return v;
    }
};