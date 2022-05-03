class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector <int> v = nums;
        sort(v.begin(), v.end());
        
        int l = 0, r = n-1;
        while(l < n and v[l] == nums[l]) l++;
        while(r > 0 and v[r] == nums[r]) r--;
        
        if(l > r) return 0;
        return r-l+1;
    }
};