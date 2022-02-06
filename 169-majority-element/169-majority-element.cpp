class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mp;
        
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        
        int mini = -1, ans = -1;
        for(auto it : mp) {
            if(it.second > mini) {
                ans = it.first;
                mini = it.second;
            }
        }
        
        return ans;
    }
};