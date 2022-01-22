// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subsetS(int ind, int s, vector<int> &ans, vector<int> &arr, int n) {
        if(ind == n) {
            ans.push_back(s);
            return;
        }
        
        s += arr[ind];
        subsetS(ind+1, s, ans, arr, n);
        s -= arr[ind];
        subsetS(ind+1, s, ans, arr, n);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector <int> ans;
        subsetS(0, 0, ans, arr, n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends