class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double tot = 0;
        
        for(int i = 1; i < salary.size()-1; i++) {
            tot += salary[i];
        }
        
        double ans = tot/(salary.size()-2);
        return ans;
    }
};