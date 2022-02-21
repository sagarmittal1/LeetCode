class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes = 0, candidate = -1;
        
        for(auto num : nums) {
            if(votes == 0) {
                candidate = num;
            }
            if(num == candidate) {
                votes++;
            }else{
                votes--;
            }
        }
        
        return candidate;
    }
};