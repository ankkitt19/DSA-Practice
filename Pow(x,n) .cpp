class Solution {
public:
    double myPow(double x, int n) {
        
        double res=1.0;
        long long k=n;
        if(n<0) k=-1*k;
        while(k>0){
            if(k%2==0){
                x=x*x;
                k/=2;
            }
            else{
                res=res*x;
                k=k-1;
            }
        }
        if(n<0){
            res=1.0/res;
        }
        return res;
    }
};
