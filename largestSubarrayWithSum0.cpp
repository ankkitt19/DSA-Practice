class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>mp;
        int largest=0;
        int sum=0;
        // mp.insert(0,0);
        for(int i=0;i<n;i++){
            sum+=A[i];
            if(sum==0){
            largest=i+1;
            }
            else{
                if(mp.find(sum)!=mp.end()){
                    largest=max(largest,i-mp[sum]);
                }
                else{
                    mp[sum]=i;
                }
            }
            
        }
        return largest;
    }
};
