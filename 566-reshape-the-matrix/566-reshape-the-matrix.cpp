class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if(m*n != r*c) {
            return mat;
        }else{
            vector <int> v;
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    v.push_back(mat[i][j]);
                }
            }
            vector <vector<int>> ans;
            int xx = 0;
            for(int i = 0; i < r; i++) {
                vector <int> temp;
                for(int i = 0; i < c; i++) {
                    temp.push_back(v[xx++]);
                }
                ans.push_back(temp);
            }
            return ans;
        }
    }
};