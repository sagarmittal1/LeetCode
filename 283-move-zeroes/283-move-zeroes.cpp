class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr = 0;
        int i = 0;
        
        while(ptr <= nums.size()-1) {
            if(nums[ptr] != 0) {
                nums[i++] = nums[ptr++];
            }else{
                ptr++;
            }
        }
        
        while(i <= nums.size()-1) {
            nums[i++] = 0;
        }
    }
};