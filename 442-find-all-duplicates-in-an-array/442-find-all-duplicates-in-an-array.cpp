class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        unordered_map <int, int> mp;
        
        for(auto num : nums) {
            mp[num]++;
            if(mp[num] == 2) ans.push_back(num);
        }
        
        return ans;
    }
};