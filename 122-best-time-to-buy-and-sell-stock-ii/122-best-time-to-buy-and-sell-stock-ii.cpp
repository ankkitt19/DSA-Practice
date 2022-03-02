class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int maxpro = 0;
            int buy = 0;
            bool stock = false;
            for (int i = 1; i < prices.size(); i++)
            {
                if (prices[i] > prices[i- 1] && !stock)
                {
                   maxpro+=prices[i]-prices[i- 1];
                }
            }
            return maxpro;
        }
};