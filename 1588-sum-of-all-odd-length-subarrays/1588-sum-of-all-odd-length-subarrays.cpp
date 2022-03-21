class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0, n = arr.size();
        vector <int> ps(n);
        ps[0] = arr[0];
        
        for(int i = 1; i < n; i++) {
            ps[i] = ps[i-1] + arr[i];
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if((j-i)%2 == 0) {
                    if(i == j) {
                        ans += arr[i];
                    }else{
                        if(i == 0) {
                            ans += ps[j];
                        }else{
                            ans += ps[j] - ps[i-1];
                        }
                    }
                }
            }
        }
        
        return ans;
    }
};