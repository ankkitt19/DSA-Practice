class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int ele:nums){
                s.insert(ele);
        }
        int i=0;
        for(auto ele:s){
                nums[i]=ele;
                ++i;
        }
            return s.size();
    }
};