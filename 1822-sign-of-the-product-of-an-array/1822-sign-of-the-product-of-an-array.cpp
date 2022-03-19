class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 0;
        for(int num : nums) {
            if(num == 0) {
                return 0;
            }else{
                if(num < 0) sign++;
            }
        }
        
        if(sign%2) {
            return -1; 
        }
        return 1;
    }
};