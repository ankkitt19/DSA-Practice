class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset;
        for(int num:nums){
            hashset.insert(num);
        }
        int longest=0,curr=0,currl=0;
        for(int num:nums){
            if(!hashset.count(num-1)){
                 curr=num;
                 currl=1;
                while(hashset.count(curr+1)){
                    curr=curr+1;
                    ++currl;
                }
                longest=max(longest,currl);
            }
        }
        return longest;
    }
};
