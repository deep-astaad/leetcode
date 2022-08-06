class Solution {
public:
    int absolute(int a){
        if (a<0)
        {
            return -a;
        }
        else{
            return a;
        }
    }
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dist = INT_MAX;
        int idx = -1;
        for (int i = 0; i < points.size(); ++i)
        {
            if (points[i][0] == x || points[i][1] == y) 
            {
                if ( (absolute(points[i][0]-x)+absolute(points[i][1]-y)) < dist)
                {
                    dist = abs(points[i][0]-x)+abs(points[i][1]-y);
                    idx = i;
                }
            }
        }
        return idx;
    }
};