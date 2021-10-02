Method 1:


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(a+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};


Method 2:


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(map.find(diff)!=map.end()){
                res.push_back(map[target-nums[i]]);
                res.push_back(i);
                return res;
            }
        map[nums[i]]=i;

        }
        return res;
    }
};
