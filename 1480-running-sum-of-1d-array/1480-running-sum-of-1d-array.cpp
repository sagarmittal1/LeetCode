class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> sum;
        int total = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
            sum.push_back(total);
        }
        
        return sum;
    }
};