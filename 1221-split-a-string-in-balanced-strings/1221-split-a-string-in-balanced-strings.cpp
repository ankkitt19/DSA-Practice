class Solution {
public:
    int balancedStringSplit(string s) {
      int balanced=0;
      int res=0;
      for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
          balanced++;
        }
       if(s[i]=='R'){
         balanced--;
       }
        if(balanced==0){
          ++res;
        }
      }
      return res;
    }
};