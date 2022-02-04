class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLen = 0;
        int sum = 0;
        unordered_map <int, int> mp;
        mp[0] = -1;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                sum -= 1;
            }else{
                sum += 1;
            }
            
            if(mp.count(sum)) {
                maxLen = max(maxLen, i-mp[sum]);
            }else{
                mp[sum] = i;
            }
        }
        
        return maxLen;
    }
};