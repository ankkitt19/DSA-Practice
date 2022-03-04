class Solution
{
    public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> right(n);
            vector<int> ans(n);
            int temp = 1;
            for (int i = n - 1; i >= 0; i--)
            {
                right[i] = nums[i] *temp;
                temp = right[i];
                    // cout<<right[i]<<" ";
            }
            int left = 1;
            //     for (int i = 0; i < n ; i++){
            //             cout<<right[i]<<" ";
            //     }
            for (int i = 0; i < n - 1; i++)
            {
                ans[i] = left*right[i + 1];
                left = left*nums[i];
            }
            ans[n - 1] = left;
            return ans;
        }
};