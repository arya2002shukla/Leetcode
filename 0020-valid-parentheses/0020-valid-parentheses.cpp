class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char>stk;     
           
        for(int i=0;i<n;i++){
            switch (s[i]){
            case '{':
                stk.push(s[i]);
                break;
            case '[':
                stk.push(s[i]);
                break;
            case '(':
                stk.push(s[i]);
                break;
            case '}':
                if(stk.empty() || stk.top()!='{'){
                    return false;
                }
                else{
                    stk.pop();
                }
                
                break;
            case ']':
                if(stk.empty() || stk.top()!='['){
                    return false;
                }
                else{
                    stk.pop();
                }
                break;
            case ')':
                if(stk.empty() || stk.top()!='('){
                    return false;
                }
                else{
                    stk.pop();
                }
                break;
            }
        }

        if(stk.empty()){
            return true;
        }
         return false;
    }
};