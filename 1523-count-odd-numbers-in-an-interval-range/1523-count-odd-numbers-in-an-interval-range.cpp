class Solution {
public:
    int countOdds(int low, int high) {
        int total = (high+1)/2;
        if(low%2) {
            total -= (low-1)/2;
        }else{
            total -= (low+1)/2;
        }
        return total;
    }
};