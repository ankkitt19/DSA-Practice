// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    { 
      vector<long long int> dp(N+1);
      dp[0]=1;
      dp[1]=1;
      uint64_t mod = 1e9  + 7;
      for(int i=2;i<=N;i++){
      long long int l=0;
      long long int r=i-1;
        while(l<=i-1){
          dp[i]+=dp[l]*dp[r];
          dp[i] %= mod;
          l++;
          r--;
        }
      }
      long long int ans=dp[N];
      return ans;
    }
};

// { Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	  // } Driver Code Ends