class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int num1=-1;
        int num2=-1;
        int c1=0,c2=0;
        for(int num:nums){
            if(num==num1){
                ++c1;
            }
            else if(num==num2){
                ++c2;
            }
            else if(c1==0){
                num1=num;
                c1=1;
            }
            else if(c2==0){
                num2=num;
                c2=1;
            }
            else{
                --c1;
                --c2;
            }
        }
        int cn1=0,cn2=0;
        for(auto num:nums){
            if(num==num1){
                cn1++;
            }
            else if(num==num2){
                cn2++;
            }
        }
        if(cn1>ceil(nums.size()/3)){
            ans.push_back(num1);
        }
        if(cn2>ceil(nums.size()/3)){
            ans.push_back(num2);
        }
        return ans;
    }
};
