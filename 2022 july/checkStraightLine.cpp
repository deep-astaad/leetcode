class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double x1 = coordinates[0][0];
        double x2 = coordinates[1][0];
        double y1 = coordinates[0][1];
        double y2 = coordinates[1][1];
        if (x1 == x2)
        {
            for (int i = 2; i < coordinates.size(); ++i)
            {
                if (coordinates[i][0] != x1)
                {
                    return false;
                }
            } 
            return true;
        }
        double m = (y2-y1)/(x2-x1);
        double c = y1-m*x1;
        for (int i = 2; i < coordinates.size(); ++i)
         {
             if (coordinates[i][1] != m*coordinates[i][0] + c)
             {
                 return false;
             }
         } 
         return true;
    }
};
// [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
// [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
// [[2,1],[4,2],[6,3]]
// [[0,0],[0,1],[0,-1]]