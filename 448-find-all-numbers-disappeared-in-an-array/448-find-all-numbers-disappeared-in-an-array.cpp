class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            int x = abs(nums[i])-1;
            if(nums[x] > 0) {
                nums[x] *= -1;
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                ans.push_back(i+1);
            }
        }
        
        return ans;
    }
};