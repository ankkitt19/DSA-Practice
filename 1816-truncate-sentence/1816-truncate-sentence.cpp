class Solution
{
    public:
        string truncateSentence(string s, int k)
        {
            int spaces = 0;
            char sp =' ';
            string ans = "";
            string val = "";
            for (int i = 0; i < s.size(); i++)
            {

                if (s[i] == sp)
                {
                    spaces++;
                  if (spaces == k){
                  ans+=val;
                  return ans;
                }
                     ans+=val;
                     ans+=" ";
                     val="";
                }
                else if (spaces == k){
                  ans+=val;
                  return ans;
                }
              else{
                val+=s[i];
              }
            }
          if(spaces==k-1){
            return s;
          }
          return ans;
        }
};