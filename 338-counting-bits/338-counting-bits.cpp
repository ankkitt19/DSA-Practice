class Solution
{
    public:
        vector<int> countBits(int n)
        {
            vector<int> ans;
            ans.push_back(0);
            for (int i = 1; i <= n; i++) {
                int num=i;
                int sum=0;
                while(num>0){
                    sum+=num%2;
                    num/=2;
                }
                ans.push_back(sum);
            }
        return ans;
        }
};