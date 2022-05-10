class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map <int, int> mp;
        
        for(auto num : nums) {
            mp[num]++;
            if(mp[num] > 1) return num;
        }
        
        return -1;
    }
};