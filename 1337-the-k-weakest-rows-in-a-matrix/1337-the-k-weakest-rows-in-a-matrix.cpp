class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <pair<int, int>> v;
        int m = mat.size(), n = mat[0].size();
        
        for(int i = 0; i < m; i++) {
            int sold = 0;
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 1) sold++;
            }
            v.push_back({sold, i});
        }
        
        sort(v.begin(), v.end());
        vector <int> ans;
        
        for(int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};