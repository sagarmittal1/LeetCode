class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                swap(nums[i], nums[x]);
                x++;
            }
        }
        
        for(int i = x; i < nums.size(); i++) {
            if(nums[i] == 1) {
                swap(nums[i], nums[x]);
                x++;
            }
        }
    }
};