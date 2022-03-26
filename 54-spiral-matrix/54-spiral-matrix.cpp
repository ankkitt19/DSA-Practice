class Solution
{
    public:
        vector<int> spiralOrder(vector<vector < int>> &matrix)
        {
            int row = matrix.size();
            int col = matrix[0].size();
            int l, r, t, b, d = 0;
            l = 0;
            r = col - 1, t = 0, b = row - 1;
            vector<int> ans;
            if (row == 0)
            {
                return ans;
            }
            while (l <= r and t <= b)
            {
                if (d == 0)
                {
                    for (int i = l; i <= r; i++)
                    {
                        ans.push_back(matrix[t][i]);
                    }
                    t++;
                    d = 1;
                }
                else if (d == 1)
                {
                    for (int i = t; i <= b; i++)
                    {
                        ans.push_back(matrix[i][r]);
                    }
                    --r;
                    d = 2;
                }
                else if (d == 2)
                {
                    for (int i = r; i >= l; i--)
                    {
                        ans.push_back(matrix[b][i]);
                    }
                    --b;
                    d = 3;
                }
                else if (d == 3)
                {
                    for (int i = b; i >= t; i--)
                    {
                        ans.push_back(matrix[i][l]);
                    }
                    ++l;
                    d = 0;
                }
            }
            return ans;
        }
};