class Solution {
public:
    bool checkIfPangram(string sentence) {
        int alpha[26];
       memset(alpha, 0, sizeof(alpha));
        for(int i=0;i<sentence.size();i++){
          int temp=sentence[i]-0;
          alpha[temp-97]=1;
        }
      for(auto ele:alpha){
        if(ele==0){
          return false;
        }
      }
      return true;
    }
};