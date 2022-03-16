class Solution {
public:
    int countOdds(int low, int high) {
        int total = 0;
        for(int i = low; i <= high; i++) {
            if(i%2) total++;
        }
        return total;
    }
};