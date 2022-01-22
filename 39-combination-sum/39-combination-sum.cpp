class Solution {
public:
    void solve(int ind, vector <int> &ds, int target, vector<int> &arr, vector<vector<int>> &ans, int n) {
        if(ind == n) {
            if(target == 0) {
                ans.push_back(ds); 
            }
            return;
        }
        
        if(arr[ind] <= target) {
            ds.push_back(arr[ind]);
            solve(ind, ds, target-arr[ind], arr, ans, n);
            ds.pop_back();
        }
        
        solve(ind+1, ds, target, arr, ans, n);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <vector<int>> ans;
        vector <int> ds;
        int n = candidates.size();
        solve(0, ds, target, candidates, ans, n);
        return ans;
    }
};