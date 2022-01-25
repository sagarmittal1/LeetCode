// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int solve(int n) {
        if(n == 0) return 0;
        return solve(n/10) + 1;
    }
  public:
    //Complete this function
    int countDigits(int n)
    {
        if(n == 0) return 1;
        return solve(n);
    }
};

// { Driver Code Starts.

int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking number n
	    cin>>n;
	    
	    //calling countDigits
	    Solution obj;
	    cout<<obj.countDigits(n)<<endl;
	    
	    
	}
	return 0;
}


  // } Driver Code Ends