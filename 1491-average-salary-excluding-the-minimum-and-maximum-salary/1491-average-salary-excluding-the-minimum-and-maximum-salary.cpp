class Solution {
public:
    double average(vector<int>& salary) {
        int mini = INT_MAX, maxi = INT_MIN, total = 0;
        for(auto it : salary) {
            mini = min(mini, it);
            maxi = max(maxi, it);
            total += it;
        }
        return ((total-mini-maxi)*1.0)/(salary.size()-2);
    }
};