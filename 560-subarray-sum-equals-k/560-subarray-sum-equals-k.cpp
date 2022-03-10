class Solution
{
    public:
        int subarraySum(vector<int> &nums, int k)
        {
            unordered_map<int, int> hashmap;
            int ans = 0;
            int sum = 0;
            hashmap[sum]=1;
            for (auto it: nums)
            {
                sum += it;
                int diff=sum-k;
                if(hashmap.find(diff)!=hashmap.end()){
                        ans+=hashmap[diff];
                }
                  hashmap[sum]++;
            }
                return ans;
        }
};