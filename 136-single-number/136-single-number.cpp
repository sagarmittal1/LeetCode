class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> mp;
        int ans = 0;
        
        for(auto num : nums) {
            mp[num]++;
        }
        
        for(auto it : mp) {
            if(it.second == 1) {
                ans = it.first;
                break;
            }
        }
        
        return ans;
    }
};