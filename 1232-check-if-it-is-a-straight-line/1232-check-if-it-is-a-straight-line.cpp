class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        if(v.size() == 2) return true;
        int xdiff = v[1][0] - v[0][0];
        int ydiff = v[1][1] - v[0][1];
        
        for(int i = 1; i < v.size(); i++) {
            int x = v[i][0] - v[i-1][0];
            int y = v[i][1] - v[i-1][1];
            if(ydiff*x != xdiff*y) return false;
        }
        return true;
    }
};