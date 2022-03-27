class Solution
{
    public:
        int maxArea(vector<int> &height)
        {
            int n = height.size();
            int i = 0;
            int j = n - 1;
            int maxw = 0;
            while (i < j) {
                int temp=min(height[i],height[j]);
                if(temp*(j-i)>maxw){
                    maxw=temp*(j-i);
                }
                height[i]<height[j]?i++:j--;
            }
            return maxw;
        }
};