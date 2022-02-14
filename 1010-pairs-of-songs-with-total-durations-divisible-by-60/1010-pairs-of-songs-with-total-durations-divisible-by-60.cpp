class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector <int> occur(60, 0);
        
        for(int i = 0; i < time.size(); i++) {
            int a = time[i]%60;
            if(a == 0 or a == 30) {
                count += occur[a]++;
            }else{
                occur[a]++;
            }
        }
        
        for(int i = 1; i <= 29; i++) {
            count += occur[i]*occur[60-i];
        }
        
        return count;
    }
};