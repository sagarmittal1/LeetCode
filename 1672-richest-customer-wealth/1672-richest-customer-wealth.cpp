class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int richest = INT_MIN;
        for(int i = 0; i < v.size(); i++) {
            int temp = 0;
            for(int j = 0; j < v[i].size(); j++) {
                temp += v[i][j];
            }
            richest = max(richest, temp);
        }
        return richest;
    }
};