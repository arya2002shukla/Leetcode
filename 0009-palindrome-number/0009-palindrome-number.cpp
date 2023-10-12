class Solution {
public:
    bool isPalindrome(int x) {
        int t = x;
        long long  s=0;
        if(x<0){
            return false;
        }
        while(x){
            int c = x%10;
            s = s*10+c;
            x = x/10;
        }
        if(t==s){
            return true;
        }
        else{
            return false;
        }
    }
};