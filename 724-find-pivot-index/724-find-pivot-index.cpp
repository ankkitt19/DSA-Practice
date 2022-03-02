class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
            if(n==1){
                    return -1;
            }
        for(int i=0;i<n;i++){
                sum+=nums[i];
        }
        int l=0;
        int r=0;
        for(int i=0;i<n;i++){
               if(i==0){
                      l=0;
                      r=sum-l-nums[i];
                       if(l==r){
                               return i;
                       }
               }
               else{
                 l+=nums[i-1];
                 r=sum-l-nums[i];
                       if(l==r){
                               return i;
                       }
               } 
        }
            return -1;
    }
};