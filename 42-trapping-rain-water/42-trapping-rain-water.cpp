class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lprefixsum(n);
        vector<int> rprefixsum(n);
        int ans=0;
        lprefixsum[0]=height[0];
        rprefixsum[n-1]=height[n-1];
        for(int i=1;i<n;i++){
          lprefixsum[i]=max(lprefixsum[i-1],height[i]);
        }
       for(int i=n-2;i>=0;i--){
         rprefixsum[i]=max(rprefixsum[i+1],height[i]);
       }
      for(int i=0;i<n;i++){
        ans+=min(lprefixsum[i],rprefixsum[i])-height[i];
      }
      return ans;
    }
};