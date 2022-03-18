class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& v) {
        int ans = INT_MAX, loc = -1;
        for(int i = 0; i < v.size(); i++) {
            if(v[i][0] == x or v[i][1] == y) {
                int xx = abs(v[i][0]-x) + abs(v[i][1]-y);
                if(xx < ans) {
                    ans = xx;
                    loc = i;
                }
            }
        }
        return loc;
    }
};