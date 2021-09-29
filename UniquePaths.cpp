Method 1:

class Solution {
public:
    int totalPath(int m,int n,int i,int j){
        if(i==n-1&& j==m-1){
            return 1;
        } 
        if(i>=n||j>=m){
            return 0;
        }
        else{
            return totalPath(m,n,i+1,j)+totalPath(m,n,i,j+1);
        }
    }
    int uniquePaths(int m, int n) {
        return totalPath(m,n,0,0);
    }
};

Method 2:

class Solution {
public:
    int totalPath(int m,int n,int i,int j,vector<vector<int>> &dp){
        if(i==n-1&& j==m-1){
            return 1;
        } 
        if(i>=n||j>=m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        else{
            return dp[i][j]=totalPath(m,n,i+1,j,dp)+totalPath(m,n,i,j+1,dp);
        }
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return totalPath(m,n,0,0,dp);
    }
};


Method 3:

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=n+m-2;
        int r=m-1;
        double res=1;
        for(int i=1;i<=r;i++){
            res=res*(N-r+i)/i;
        }
        return (int)res;
    }
};
