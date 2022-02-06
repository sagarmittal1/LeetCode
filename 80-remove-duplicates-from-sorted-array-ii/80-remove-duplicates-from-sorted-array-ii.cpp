class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr = 0;
        int times = 0, num = nums[0];
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == num) {
                if(times == 2) {
                    
                }else{
                    nums[ptr++] = num;
                    times++;
                }
            }else{
                num = nums[i];
                times = 1;
                nums[ptr++] = num;
            }
        }
        
        return ptr;
    }
};