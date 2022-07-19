class Solution {
public:
    bool strongPasswordCheckerII(string password) {
      bool low=false;
      bool up=false;
      bool dig=false;
      bool special=false;
      bool adjacent=true;
      if(password.size()<8){
        return false;
      }
      for(int i=0;i<password.size();i++){
        if(isupper(password[i])){
          up=true;
        }
        else if(islower(password[i])){
          low=true;
        }
        else if(isdigit(password[i])){
          dig=true;
        }
        else if(password[i]=='!' or password[i]=='@' or password[i]=='#' or password[i]=='$' or password[i]=='%' or password[i]=='^' or password[i]=='&' or password[i]=='*' or password[i]=='(' or password[i]==')' or password[i]=='-' or password[i]=='+'){
          special=true;
        }
      }
      for(int i=1;i<password.size();i++){
        if(password[i]==password[i-1]){
          adjacent=false;
          break;
        }
      }
      if(low and up and dig and special and adjacent){
        return true;
      }
      return false;
    }
};