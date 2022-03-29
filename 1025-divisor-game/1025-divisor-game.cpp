class Solution
{
    public:
 unordered_map<int,bool>dp;
    bool helper(int n, int r)
        {
            if (n == 1 and r % 2 == 0)
            {
                dp[n]=true;
                return true;
            }
            if(n==1 and r%2!=0){
                dp[n]=false;
                return false;
            }
          return dp[n]=helper(n-1,r+1);
        }
    bool divisorGame(int n)
    {
        return helper(n, 1);
    }
};