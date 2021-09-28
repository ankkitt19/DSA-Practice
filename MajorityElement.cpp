Method 1:


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto i: nums)
        {
            mp[i]++;
        }
        for (auto p: mp) 
        {
                 if(p.second>=ceil(nums.size()/2.0)){
                     return p.first;
                 }
        }
        return 0;
    }
};

METHOD 2:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for(auto num:nums){
            if(count==0){
                candidate=num;
            }
            if(num==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
    }
};

