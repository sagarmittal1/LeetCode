class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        int ptr = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[ptr]) {
                ptr++;
                nums[ptr] = nums[i];
            }
        }
        return ptr+1;
    }
};