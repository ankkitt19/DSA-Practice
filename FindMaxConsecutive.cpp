class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int count=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                if(max<=count){
                    max=count;
                }
            }
            else{
                if(max<=count){
                    max=count;
                    count=0;
                }
                count=0;
            }
        }
        return max;
    }
};
