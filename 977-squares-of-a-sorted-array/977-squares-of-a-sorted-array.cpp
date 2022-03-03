class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
            vector<int> ans(n);
        int s=0,e=n-1;
        for(int i=0;i<n;i++){
                if(nums[s]*nums[s]>nums[e]*nums[e]){
                        ans[n-i-1]=nums[s]*nums[s];
                        s++;
                }
                else{
                       ans[n-i-1]=nums[e]*nums[e];
                        --e;
                }
        }
            return ans;
    }
};