class Solution {
public:
    int numRescueBoats(vector<int>& v, int limit) {
        sort(v.begin(), v.end());
        
        int boats = 0;
        int l = 0, r = v.size()-1;
        
        while(l <= r) {
            if(v[l] + v[r] <= limit) {
                boats++;
                l++; r--;
            }else{
                boats++;
                r--;
            }
        }
        return boats;
        
    }
};