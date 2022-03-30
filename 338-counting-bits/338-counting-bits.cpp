class Solution
{
    public:
        vector<int> countBits(int n)
        {
            vector<int> ans;
            ans.push_back(0);
            for (int i = 1; i <= n; i++) {
                int n=i;
                int counter=0;
              while(n>0){
                  int rsbm=n&-n;
                  counter++;
                  n-=rsbm;
              }
                ans.push_back(counter);
            }
        return ans;
        }
};