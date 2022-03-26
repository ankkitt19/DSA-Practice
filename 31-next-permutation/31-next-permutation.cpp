class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
            int n = nums.size(), i, j;
            i = n - 2;
            while (i >= 0)
            {
                if (nums[i] >= nums[i + 1])
                {
                    i--;
                }
                else
                {
                    break;
                }
            }
            if (i < 0)
            {
                reverse(nums.begin(), nums.end());
            }
            else
            {
                for (j = n - 1; j > i; j--)
                {
                    if (nums[j] > nums[i])
                    {
                        swap(nums[i], nums[j]);
                            break;
                    }
                   
                }
                     reverse(nums.begin() + i + 1, nums.end());
            }
        }
};