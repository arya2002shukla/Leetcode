class Solution {
public:
    bool isPalindrome(string s) {
        int l = s.length();
        string v="";
        string b="";
        if(l==1){
            return true;
        }
        for(int i=l-1;i>=0;i--){
            if(s[i]!=' ' && s[i]!=',' && s[i]!=':' && s[i]!='.' && s[i]!='@' && s[i]!='#' && s[i]!='_' && s[i]!='\\' && s[i]!='{' && s[i]!='}'&& s[i]!='[' && s[i]!=']' && s[i]!='(' && s[i]!=')' && s[i]!='\'' && s[i]!='\"' && s[i]!='-' && s[i]!='?' && s[i]!=';' && s[i]!='!' && s[i]!='`'){
                if(isupper(s[i])){
                     v+=tolower(s[i]);
                }
                else{
                     v+=s[i];
                }
                
            }
            
        }
        for(int i=0;i<l;i++){
            if(s[i]!=' ' && s[i]!=',' && s[i]!=':' && s[i]!='.' && s[i]!='@' && s[i]!='#' && s[i]!='_' && s[i]!='\\' && s[i]!='{' && s[i]!='}'&& s[i]!='[' && s[i]!=']' && s[i]!='(' && s[i]!=')' && s[i]!='\'' && s[i]!='\"' && s[i]!='-'  && s[i]!='?' && s[i]!=';' && s[i]!='!' && s[i]!='`'){
                if(isupper(s[i])){
                     b+=tolower(s[i]);
                }
                else{
                     b+=s[i];
                }
                
            }
            
        }
        int l2 = v.length();
        for(int i=0;i<l2;i++){
            if(v[i]!=b[i]){
                return false;
            }
        }

        return true;

        
    }
};