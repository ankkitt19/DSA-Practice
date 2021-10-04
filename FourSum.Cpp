using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int temp=target-(nums[i]+nums[j]);
                int lo=j+1;
                int hi=nums.size()-1;
                while(lo<hi){
             int sum=nums[lo]+nums[hi];
                    if(sum<temp){
                       lo++;
                    }
                    else if(sum>temp){
                        hi--;
                    }
                    else{
                        vector<int> arr(4,0);
                        arr[0]=nums[i];
                        arr[1]=nums[j];
                        arr[2]=nums[lo];
                        arr[3]=nums[hi];
                        ans.push_back(arr);
                        while(lo<hi && nums[lo]==arr[2]){
                                ++lo;
                        }
                        while(lo<hi && nums[hi]==arr[3]){
                            --hi;
                        }
                    }
                }
                while(j+1<nums.size() && nums[j+1]==nums[j]){
                    ++j;
                }
                while(i+1<nums.size() && nums[i+1]==nums[i]){
                    ++i;
                }
            }
        }
                return ans;

    }
};
