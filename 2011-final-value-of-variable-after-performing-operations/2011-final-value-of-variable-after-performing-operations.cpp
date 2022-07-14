class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        string predec="--X";
        string postdec="X--";
        string preinc="++X";
        string postinc="X++";
      int x=0;
        for(string ch: operations){
          if(ch==predec){
            --x;
          }
          else if(ch==postdec){
            x--;
          }
          else if(ch==preinc){
            ++x;
          }
          else if(ch==postinc){
            x++;
          }
        }
      return x;
    }
};