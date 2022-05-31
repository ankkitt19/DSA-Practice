// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int i,j;
        int windowsize=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]<=k)
            ++windowsize;
        }
        if(windowsize==0 || windowsize==n) return 0;
        int greaterelem=0,minswap=INT_MAX;
        i=0;
        j=0;
        while(j<n)
        {
            if(arr[j]>k)
            ++greaterelem;
            if(j-i+1<windowsize)
            ++j;
            else
            {
                minswap=min(minswap,greaterelem);
                if(arr[i]>k)
                --greaterelem;
                ++i;
                ++j;
            }
        }
        return minswap;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends