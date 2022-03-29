class Solution {
public:
    int maxSubArray(vector<int>& nums) {
              int osm=nums[0];
             int currsum=nums[0];
        for(int i=1;i<nums.size();i++){
             if(currsum>0){
                 currsum+=nums[i];
             }
            else{
                currsum=nums[i];
            }
            if(currsum>osm){
                osm=currsum;
            }
        }
        return osm;
    }
};